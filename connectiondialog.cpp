#include "connectiondialog.h"
#include "ui_connectiondialog.h"

ConnectionDialog::ConnectionDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConnectionDialog)
{
    ui->setupUi(this);
    connect(ui->saveButton, SIGNAL(clicked()), this, SLOT(setIpAddress()));
    connect(ui->cancelButton, SIGNAL(clicked()), this, SLOT(close()));
}

/**
 * @brief ConnectionDialog::setIpAddress
 */
void ConnectionDialog::setIpAddress()
{
    this->setWindowTitle(ui->lineEdit->text());
}

ConnectionDialog::~ConnectionDialog()
{
    delete ui;
}
