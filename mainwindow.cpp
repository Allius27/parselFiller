#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_add_button_clicked()
{
    m_dialog = new Dialog(ui->tableWidget, this);
    m_dialog->exec();
    delete m_dialog;
    m_dialog = nullptr;
}
