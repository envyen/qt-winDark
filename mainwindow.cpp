#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <winDark.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    if(winDark::isDarkTheme())
        winDark::setDark_Titlebar(reinterpret_cast<HWND>(winId()));

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

