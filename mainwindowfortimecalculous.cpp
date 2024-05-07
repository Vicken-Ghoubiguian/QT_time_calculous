#include "mainwindowfortimecalculous.h"
#include "ui_mainwindowfortimecalculous.h"

MainWindowForTimeCalculous::MainWindowForTimeCalculous(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowForTimeCalculous)
{
    ui->setupUi(this);
}

MainWindowForTimeCalculous::~MainWindowForTimeCalculous()
{
    delete ui;
}
