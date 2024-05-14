#include "readbook.h"
#include "ui_readbook.h"
#include <QDebug>
#include <QApplication>
#include <QDir>
#include <QFile>
#include <QImage>
#include <QLabel>

#include<iostream>
#include <windows.h>
#include <string>
#include <cstdlib>


readBook::readBook(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::readBook)
{
    ui->setupUi(this);
}

void readBook::chtenie()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string filename = this->filepath.toStdString();

    // Создаем массив char и копируем данные из std::string
    char filenameArr[filename.size() + 1]{};
    strcpy(filenameArr, filename.c_str());




    char command[100]{};
    sprintf(command, "start %s\"", filenameArr, "\"");

    // Вызываем системную команду для открытия файла
    system(command);

}

readBook::~readBook()
{
    delete ui;
}
