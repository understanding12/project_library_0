#include "readbook.h"
#include "ui_readbook.h"
#include <QDebug>
#include <QApplication>
#include <QDir>
#include <QFile>
#include <QImage>
#include <QLabel>
readBook::readBook(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::readBook)
{
    ui->setupUi(this);
}

void readBook::chtenie()
{


}

readBook::~readBook()
{
    delete ui;
}
