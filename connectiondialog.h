#ifndef CONNECTIONDIALOG_H
#define CONNECTIONDIALOG_H

#include <QDialog>

class QButton;
class QLineEdit;

namespace Ui {
class ConnectionDialog;
}

class ConnectionDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit ConnectionDialog(QWidget *parent = 0);
    ~ConnectionDialog();
public slots:
    void setIpAddress();
private:
    void isValidIP(const QString &str);
    Ui::ConnectionDialog *ui;
    QButton *cancelButton;
    QButton *saveButton;
    QLineEdit *ipLabel;
};

#endif // CONNECTIONDIALOG_H
