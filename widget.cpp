#include "widget.h"
#include "ui_widget.h"
#include "addbookwindow.h"
#include "correctwindow.h"
#include <QVector>
#include <QFile>
#include <QMessageBox>
#include <QMap>
#include <QString>
#include <QMessageBox>
#include <QTextStream>
#include <QDebug>
#include <iostream>

enum EMattersEnum
    {
        ArtLiterature,
        ScienceLiterature,
        ReligionLiterature,
        DocumentLiterature
    };

Widget::Widget(QWidget *parent) :  QWidget(parent), ui(new Ui::Widget) {
    ui->setupUi(this);
    count = 0;
    ui->treeWidget->setColumnCount(1);
    QStringList headers;
    headers << tr("Объекты");
    ui->treeWidget->setHeaderLabels(headers);
    currentItem = NULL;
    currentColumn = 0;
    for(int i{}; i<matterNames.length(); i++){
        QTreeWidgetItem *SubjectMatter = new QTreeWidgetItem(ui->treeWidget, ui->treeWidget->currentItem());
        SubjectMatter->setText (currentColumn,  matterNames[i]);
        SubjectMatter->setExpanded(true);
        Matters.push_back(SubjectMatter);
        for (int j{}; j<genreNames[i].length(); j++){
            QTreeWidgetItem *Genre = new QTreeWidgetItem(Matters[i], ui->treeWidget->currentItem());
            Genre->setText (currentColumn,  genreNames[i][j]);
            Genre->setExpanded(true);
            Genres.push_back(Genre);
        }
    }

    QFile file("fileout.txt");
        if(file.open(QIODevice::ReadOnly))
        {
            while(!file.atEnd())
            {
                QString str = file.readLine();
                QStringList lst = str.split("__");
                book t;
                t.m_SubjectMatter = lst.at(0);
                t.m_Genre = lst.at(1);
                t.m_Author = lst.at(2);
                t.m_Name = lst.at(3);
                QString tstr =lst.at(4);
                t.m_Price = tstr.toInt();
                t.m_Translator = lst.at(5);
                tstr =lst.at(6);
                t.m_Time = QTime::fromString(tstr, "h:m");
                for (int i{}; i<Matters.length(); i++){
                    for (int j{}; j<Genres.length(); j++){
                        if (t.m_SubjectMatter == Matters[i]->text(currentColumn) && t.m_Genre == Genres[j]->text(currentColumn)){
                            QTreeWidgetItem *newItem = new QTreeWidgetItem(Genres[j], ui->treeWidget->currentItem());
                            newItem->setText (currentColumn, t.m_Author + " " + t.m_Name);
                            newItem->setExpanded(true);
                            ui->tableWidget->insertRow(ui->tableWidget->rowCount());
                            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 0, new QTableWidgetItem(t.m_SubjectMatter));
                            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 1, new QTableWidgetItem(t.m_Genre));
                            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 2, new QTableWidgetItem(t.m_Author));
                            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 3, new QTableWidgetItem(t.m_Name));
                            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 4, new QTableWidgetItem(QString::number(t.m_Price)));
                            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 5, new QTableWidgetItem(t.m_Translator));
                            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 6, new QTableWidgetItem(t.m_Time.toString("h:m")));
                            books.push_back(t);
                        }
                    }
                }
            }
        }
}

Widget::~Widget() { delete ui; }

void Widget::correctirivka(const QString &textMatter,const QString &textGenre,const QString &textAuthor,const QString &textName,const QString price,const QString textTime,const QString &textTranslate,int index)
{

    books[index].m_SubjectMatter = textMatter;
    books[index].m_Genre = textGenre;
    books[index].m_Author = textAuthor;
    books[index].m_Name = textName;
    books[index].m_Price = price.toInt();
    // books[index].m_Time = textTime;
    books[index].m_Translator = textTranslate;
    ui->treeWidget->currentItem()->setText(0, books[index].m_Author + " " + books[index].m_Name);
   // с этой строчкой вылетает ui->listWidget->currentItem()->setText(books[index].m_Author + " " + books[index].m_Name);

 }



int Widget::treeCount(QTreeWidget *tree, QTreeWidgetItem *parent = 0) {
    tree->expandAll();
    int count = 0;
    if (parent == 0) {
        int topCount = tree->topLevelItemCount();
        for (int i = 0; i < topCount; i++) {
            QTreeWidgetItem *item = tree->topLevelItem(i);
            if (item->isExpanded()) {
                count += treeCount(tree, item);
            }
        }
        count += topCount;
    }
    else {
        int childCount = parent->childCount();
        for (int i = 0; i < childCount; i++) {
            QTreeWidgetItem *item = parent->child(i);
            if (item->isExpanded()) {
                count += treeCount(tree, item);
            }
        }
        count += childCount;
    }
    return count;
}

void Widget::DeleteItem (QTreeWidgetItem *currentItem) {
    QTreeWidgetItem *parent = currentItem->parent();
    int index;
    if (parent) {
        index = parent->indexOfChild(ui->treeWidget->currentItem());
        delete parent->takeChild(index);
    }
    else {
        index = ui->treeWidget->indexOfTopLevelItem(ui->treeWidget->currentItem());
        delete ui->treeWidget->takeTopLevelItem(index);
    }
}


void Widget::on_addBook_clicked() { //кнопка Добавить
        AddBookWindow addWindow;
        addWindow.setupMatters(Matters, 0);
        addWindow.setupGenres();
        addWindow.setModal(true);
        addWindow.exec();
        for (int i{}; i<Matters.length(); i++){
            for (int j{}; j<Genres.length(); j++){
                if (addWindow.tbook.m_SubjectMatter == Matters[i]->text(currentColumn) && addWindow.tbook.m_Genre == Genres[j]->text(currentColumn)){
                    QTreeWidgetItem *newItem = new QTreeWidgetItem(Genres[j], ui->treeWidget->currentItem());
                    newItem->setText (currentColumn, addWindow.tbook.m_Author + " " + addWindow.tbook.m_Name);
                    newItem->setExpanded(true);
                    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
                    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 0, new QTableWidgetItem(addWindow.tbook.m_SubjectMatter));
                    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 1, new QTableWidgetItem(addWindow.tbook.m_Genre));
                    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 2, new QTableWidgetItem(addWindow.tbook.m_Author));
                    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 3, new QTableWidgetItem(addWindow.tbook.m_Name));
                    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 4, new QTableWidgetItem(QString::number(addWindow.tbook.m_Price)));
                    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 5, new QTableWidgetItem(addWindow.tbook.m_Translator));
                    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 6, new QTableWidgetItem(addWindow.tbook.m_Time.toString("h:m")));
                    books.push_back(addWindow.tbook);
                }
            }
        }
    showAll();
}

void Widget::addToTable(book book){
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 0, new QTableWidgetItem(book.m_SubjectMatter));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 1, new QTableWidgetItem(book.m_Genre));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 2, new QTableWidgetItem(book.m_Author));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 3, new QTableWidgetItem(book.m_Name));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 4, new QTableWidgetItem(QString::number(book.m_Price)));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 5, new QTableWidgetItem(book.m_Translator));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 6, new QTableWidgetItem(book.m_Time.toString("h:m")));
}

void Widget::on_deleteBook_clicked() { //кнопка Удалить
    if (currentItem) {
        DeleteItem (currentItem);
        currentItem = NULL;
    }
    showAll();
}

void Widget::showAll(void) {
    int cnt = treeCount (ui->treeWidget);
    QString str(tr("Всего: ")+QString("%1").arg(cnt));
    setWindowTitle(str);
}

void Widget::on_treeWidget_itemClicked(QTreeWidgetItem *item, int column) {
    currentItem = item;
    currentColumn = column;
    for (int i{}; i<books.length(); i++){
        if (currentItem->text(currentColumn) == books[i].m_Author + " " + books[i].m_Name){
            //даем сигнал к редактированию
            // emit itemClicked(books[i].m_SubjectMatter, books[i].m_Genre,books[i].m_Author,books[i].m_Name, QString::number(books[i].m_Price),QString::number(books[i].m_Time),books[i].m_Translator,i);


            ui->tableWidget->clear();
            ui->tableWidget->setRowCount(0);
            addToTable(books[i]);
            break;
        }
        else{
            ui->tableWidget->clear();
        }
    }
}

void Widget::on_Exit_clicked()
{
    QFile file("fileout.txt");
    if (file.open(QIODevice::WriteOnly))
    {
        QTextStream stream(&file);
        stream.setCodec( "UTF-8" );
        for (int i{}; i<books.length(); i++){
            stream << books[i].m_SubjectMatter << "__" << books[i].m_Genre << "__" << books[i].m_Author << "__" << books[i].m_Name << "__" << books[i].m_Price << "__" << books[i].m_Translator << "__" << books[i].m_Time.toString("h:m") << "__" << '\n';
        }
        file.close();
        if (stream.status() != QTextStream::Ok)
        {
            qDebug() << "Ошибка записи файла";
        }
    }
    close();
}


void Widget::on_correctBook_clicked()
{
    correctWindow *window;
    window = new correctWindow;
    window->show();
    connect(this, this->itemClicked,window, window->fillLine);
    connect(window, SIGNAL(buttonClicked(const QString&,const QString&,const QString&,const QString&,const QString&,const QString&,const QString&,int)), this, SLOT(correctirivka(const QString&,const QString&,const QString&,const QString&,const QString,const QString,const QString&,int)));
}

