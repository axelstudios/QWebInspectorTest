#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>

class QWebView;

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = nullptr);
  virtual ~MainWindow() override = default;

private:
  QMenuBar *m_menuBar;
  QMenu *m_fileMenu;
  QAction *m_exitAction;
  QWebView *m_view;
};

#endif // MAINWINDOW_HPP
