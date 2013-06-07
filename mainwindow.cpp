#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "aboutform.h"
#include "connectiondialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionAbout, SIGNAL(triggered()), this, SLOT(display_about()));
    connect(ui->actionConnect_to_Spiceworks, SIGNAL(triggered()), this, SLOT(connect_to_spice()));
    connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->actionConnection, SIGNAL(triggered()), this, SLOT(edit_connection()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * Will display the about section of the program
 *@brief MainWindow::display_about
 */
void MainWindow::display_about()
{
    AboutForm *form = new AboutForm;
    form->setWindowTitle("About Inventory Manager");
    form->show();
}

/**
 *  Will connect you to current Spiceworks server
 *  to authenticate.
 *  @brief MainWindow::connect_to_spice
 */
void MainWindow::connect_to_spice()
{
    //spiceworks session stuff here
}

/**
 * Will open the dialog to let you edit your connection settings
 *@brief MainWindow::edit_connection
 */
void MainWindow::edit_connection()
{
    ConnectionDialog *cDialog = new ConnectionDialog;
    cDialog->setWindowTitle("Edit Connection Settings");
    cDialog->show();
}
