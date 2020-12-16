#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QTableWidget *tableWidget, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    m_table = tableWidget;
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

bool Dialog::checkLine(QLineEdit *lineEdit, const QString & err)
{
    if ( lineEdit->text().isEmpty() ) {
        ui->label_Error->setText("Заполни " + err);
        return false;
    }

    return true;
}

void Dialog::on_pushButton_clicked()
{
    if ( !checkLine(ui->lineEdit_name, "имя") ||
         !checkLine(ui->lineEdit_surname, "фамилию") ||
         !checkLine(ui->lineEdit_country, "страну") ||
         !checkLine(ui->lineEdit_adress, "адрес") ||
         !checkLine(ui->lineEdit_index, "индекс") )
        return;

    m_table->insertRow(0);

    m_table->setItem(0,0,new QTableWidgetItem(ui->lineEdit_name->text()));
    m_table->setItem(0,1,new QTableWidgetItem(ui->lineEdit_surname->text()));
    m_table->setItem(0,2,new QTableWidgetItem(ui->lineEdit_country->text()));
    m_table->setItem(0,3,new QTableWidgetItem(ui->lineEdit_adress->text()));
    m_table->setItem(0,4,new QTableWidgetItem(ui->lineEdit_index->text()));

    close();
}
