#include <mainwindow.h>
#include <ui_mainwindow.h>
#include <customerlist.h>
#include <transactionlist.h>
#include <customerdetails.h>
#include <deletecustomer.h>
#include <transactiondetails.h>
#include <accountdelete.h>
#include <dbmanager.h>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    DbManager::close();
    delete ui;
}

void MainWindow::on_buttonCustomers_clicked() {
    hide();
    CustomerList *customerList = new CustomerList();
    QObject::connect(customerList, SIGNAL(showPrev()), SLOT(show()));
    customerList->show();
}

void MainWindow::on_buttonTransactions_clicked() {
    hide();
    TransactionList *transactionlist = new TransactionList();
    transactionlist->init();
    QObject::connect(transactionlist, SIGNAL(showPrev()), SLOT(show()));
    transactionlist->show();
}


void MainWindow::on_actionNew_triggered() {
    hide();
    CustomerDetails *customerDet = new CustomerDetails();
    QObject::connect(customerDet, SIGNAL(showPrev()), SLOT(show()));
    customerDet->show();
}

void MainWindow::on_actionDelete_triggered() {
    hide();
    Customerdelete *customerDelete = new Customerdelete();
    QObject::connect(customerDelete, SIGNAL(showPrev()), SLOT(show()));
    customerDelete->show();
}

void MainWindow::on_exitButton_clicked() {
    DbManager::close();
    QApplication::quit();
}

void MainWindow::on_actionDelete_2_triggered()
{
    hide();
    accountdelete *accountdel = new accountdelete();
    QObject::connect(accountdel, SIGNAL(showPrev()), SLOT(show()));
    accountdel->show();
}

void MainWindow::on_actionNew_Transaction_triggered()
{
    hide();
    TransactionDetails *transactiondetail = new TransactionDetails();
    QObject::connect(transactiondetail, SIGNAL(showPrev()), SLOT(show()));
    transactiondetail->show();
}
