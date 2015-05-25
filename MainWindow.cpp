#include "MainWindow.hpp"

#include <QMenuBar>
#include <QWebInspector>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  m_menuBar(new QMenuBar(this)),
  m_fileMenu(new QMenu("&File", m_menuBar)),
  m_exitAction(new QAction("E&xit", this)),
  m_view(new QWebView(this))
{
  setWindowTitle("QWebInspector Test");

  m_exitAction->setShortcuts(QKeySequence::Quit);
  connect(m_exitAction, &QAction::triggered, this, &MainWindow::close);
  m_fileMenu->addAction(m_exitAction);
  m_menuBar->addMenu(m_fileMenu);
  setMenuBar(m_menuBar);

  QWebSettings::globalSettings()->setAttribute(QWebSettings::DeveloperExtrasEnabled, true);
  m_view->load(QUrl("http://google.com"));
  /*auto *inspector = new QWebInspector();
  inspector->setPage(m_view->page());*/

  setCentralWidget(m_view);
}
