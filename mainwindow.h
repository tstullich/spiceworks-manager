#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void connect_to_spice();
    void display_about();
    void edit_connection();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
