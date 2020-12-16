#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTableWidget>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    QTableWidget *m_table;

    bool checkLine(QLineEdit *lineEdit, const QString &err);

public:
    explicit Dialog(QTableWidget *tableWidget, QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
