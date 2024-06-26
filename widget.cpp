#include "widget.h"
#include "ui_widget.h"
#include "addbookwindow.h"
#include "correctwindow.h"
#include "analitics.h"
#include <QVector>
#include <QFile>
#include <QMessageBox>
#include <QMessageBox>
#include <QTextStream>
#include <QDebug>
#include <QKeyEvent>
#include <Qt>
#include <iostream>

#include"readbook.h"
enum EMattersEnum
    {
        ArtLiterature,
        ScienceLiterature,
        ReligionLiterature,
        DocumentLiterature
    };

Widget::Widget(QWidget *parent) :  QWidget(parent), ui(new Ui::Widget) {
    ui->setupUi(this);
    setWindowState(Qt::WindowFullScreen);
    count = 0;
    ui->treeWidget->setColumnCount(1);
    QStringList headers;
    headers << tr("Фильтры");
    ui->treeWidget->setHeaderLabels(headers);
    currentItem = NULL;
    currentColumn = 0;





    ui->priceSort->addItem("сортировка по возрастанию");
    ui->priceSort->addItem("сортировка по убыванию");
    ui->priceSort->setMinimumWidth(ui->priceSort->minimumSizeHint().width());
    \
        \

    ui->timeSort->addItem("сортировка по возрастанию");
    ui->timeSort->addItem("сортировка по убыванию");

    ui->sortingMatter->addItem("сортировка от А до Я");
    ui->sortingMatter->addItem("сортировка Я до А");

    ui->sortingGenre->addItem("сортировка от А до Я");
    ui->sortingGenre->addItem("сортировка Я до А");

    ui->sortingAthor->addItem("сортировка от А до Я");
    ui->sortingAthor->addItem("сортировка Я до А");


    ui->sortingName->addItem("сортировка от А до Я");
    ui->sortingName->addItem("сортировка Я до А");

    for(int i{}; i<matterNames.length(); i++){
        QTreeWidgetItem *SubjectMatter = new QTreeWidgetItem(ui->treeWidget, ui->treeWidget->currentItem());
        SubjectMatter->setText (currentColumn,  matterNames[i]);
        SubjectMatter->setExpanded(false);
        Matters.push_back(SubjectMatter);
        for (int j{}; j<genreNames[i].length(); j++){
            QTreeWidgetItem *Genre = new QTreeWidgetItem(Matters[i], ui->treeWidget->currentItem());
            Genre->setText (currentColumn,  genreNames[i][j]);
            Genre->setExpanded(false);
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


                QStringList str2 = str.split("|");
                for (int i = 1;i<((str2.size()/2-str2.size()%2)*2)-1;i = i+2)
                {
                    QString coment = str2.at(i);
                    QString reitstr = str2.at(i+1);
                    double reitdouble = reitstr.toDouble();
                    reviews *rew = new reviews;
                    rew->SetRait(reitdouble);
                    rew->SetReview(coment);
                    t.m_Reviews.push_back(*rew);
                }
                t.counteverage();
                QStringList str3 = str.split("*");
                t.filepath = str3[1];
                addToTable(t);
                books.push_back(t);
            }
        }

        ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(3, QHeaderView::Stretch);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(4, QHeaderView::Stretch);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(5, QHeaderView::Stretch);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(6, QHeaderView::Stretch);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(7, QHeaderView::Stretch);
        // ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        // ui->tableWidget->setSelectionBehavior(QAbstractItemView::);
}

Widget::~Widget() { delete ui; }

void Widget::saveToFile(){
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
}

void Widget::correctirivka(const QString &textMatter,const QString &textGenre,const QString &textAuthor,const QString &textName,const QString price,const QString textTime,const QString &textTranslate,int index)
{

    books[index].m_SubjectMatter = textMatter;
    books[index].m_Genre = textGenre;
    books[index].m_Author = textAuthor;
    books[index].m_Name = textName;
    books[index].m_Price = price.toInt();
    //books[index].m_Time = textTime.toInt();
    books[index].m_Translator = textTranslate;
    //ui->treeWidget->currentItem()->setText(0, books[index].m_Author + " " + books[index].m_Name);
   // с этой строчкой вылетает ui->listWidget->currentItem()->setText(books[index].m_Author + " " + books[index].m_Name);
    ui->tableWidget->clearContents(); // Очищаем содержимое ячеек
    ui->tableWidget->setRowCount(0);
    for (int i{};i<books.size();i++)
    {
        int row = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row);
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem( books[i].m_SubjectMatter));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem( books[i].m_Genre));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem( books[i].m_Author));
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem(  books[i].m_Name));
        //ui->tableWidget->setItem(row, 4, new QTableWidgetItem( books[i].m_Time));
        ui->tableWidget->setItem(row, 5, new QTableWidgetItem( books[i].m_Translator));


    }

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

void Widget::DeleteItem (QTableWidgetItem *currentItem) {
    for (int i{}; i<books.length(); i++){
        if (books[i].m_SubjectMatter == ui->tableWidget->item(currentItem->row(), 0)->text() &&
            books[i].m_Genre == ui->tableWidget->item(currentItem->row(), 1)->text() &&
            books[i].m_Author == ui->tableWidget->item(currentItem->row(), 2)->text() &&
            books[i].m_Name == ui->tableWidget->item(currentItem->row(), 3)->text()&&
            books[i].m_Price == ui->tableWidget->item(currentItem->row(), 4)->text().toInt()&&
            books[i].m_Translator == ui->tableWidget->item(currentItem->row(), 5)->text()&&
            books[i].m_Time == QTime::fromString(ui->tableWidget->item(currentItem->row(), 6)->text(), "h:m")){
            books.remove(i);
        }
    }
    ui->tableWidget->removeRow(currentItem->row());
}


void Widget::on_addBook_clicked() {
        AddBookWindow addWindow;
        addWindow.setupMatters(Matters, 0);
        addWindow.setupGenres();
        addWindow.setModal(true);
        addWindow.exec();
        if (addWindow.isAddButtonClicked == true){
            if (currentColumn==0 && currentItem==NULL){
                addToTable(addWindow.tbook);
            }
            else if (addWindow.tbook.m_SubjectMatter == ui->treeWidget->currentItem()->text(currentColumn) || addWindow.tbook.m_Genre == ui->treeWidget->currentItem()->text(currentColumn)){ addToTable(addWindow.tbook); }
            books.push_back(addWindow.tbook);
        }
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
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 7, new QTableWidgetItem(QString::number(book.m_averageRating)));
}

void Widget::on_deleteBook_clicked() {
    if (ui->tableWidget->currentItem()) {
        DeleteItem (ui->tableWidget->currentItem());
        // currentItem = NULL;
    }
}

void Widget::on_treeWidget_itemClicked(QTreeWidgetItem *item, int column) {
    currentItem = item;
    currentColumn = column;
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    for (int i{}; i<books.length(); i++){
        if (currentItem->text(currentColumn) == books[i].m_SubjectMatter || currentItem->text(currentColumn) == books[i].m_Genre){
            addToTable(books[i]);
        }
    }
}

void Widget::on_Exit_clicked()
{
    QDialog exitSure;
    exitSure.setModal(true);
    exitSure.exec();
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

void Widget::keyPressEvent(QKeyEvent *event) {
    currentItem = NULL;
    currentColumn = 0;
    int key=event->key();
    if (key>=Qt::Key_Escape) {
        ui->tableWidget->clearContents();
        ui->tableWidget->setRowCount(0);
        for (int i{}; i<books.length(); i++){
            addToTable(books[i]);
        }
    }
}


void Widget::on_searchLine_textChanged(const QString &arg1)
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    for (int i{}; i<books.length(); i++){
        if ((books[i].m_SubjectMatter).toLower().contains(ui->searchLine->text().toLower()) || (books[i].m_Genre).toLower().contains(ui->searchLine->text().toLower()) || (books[i].m_Author).toLower().contains(ui->searchLine->text().toLower()) || (books[i].m_Name).toLower().contains(ui->searchLine->text().toLower()) || (books[i].m_Translator).toLower().contains(ui->searchLine->text().toLower())){
            addToTable(books[i]);
        }
    }
}


void Widget::on_saveButton_clicked()
{
    saveToFile();
}


void Widget::on_priceSort_currentTextChanged(const QString &arg1)
{
    if (arg1=="сортировка по возрастанию"){
        ui->tableWidget->sortByColumn(4,Qt::AscendingOrder);
    }
    else if(arg1=="сортировка по убыванию"){
        ui->tableWidget->sortByColumn(4,Qt::DescendingOrder);
    }
}


void Widget::on_timeSort_currentTextChanged(const QString &arg1)
{
    if (arg1=="сортировка по возрастанию"){
        ui->tableWidget->sortByColumn(6,Qt::AscendingOrder);
    }
    else if(arg1=="сортировка по убыванию"){
        ui->tableWidget->sortByColumn(6,Qt::DescendingOrder);
    }
}


void Widget::on_sortingMatter_currentTextChanged(const QString &arg1)
{
    if (arg1=="сортировка от А до Я"){
        ui->tableWidget->sortByColumn(0,Qt::AscendingOrder);
    }
    else if(arg1=="сортировка Я до А"){
        ui->tableWidget->sortByColumn(0,Qt::DescendingOrder);
    }
}


void Widget::on_sortingGenre_currentTextChanged(const QString &arg1)
{
    if (arg1=="сортировка от А до Я"){
        ui->tableWidget->sortByColumn(1,Qt::AscendingOrder);
    }
    else if(arg1=="сортировка Я до А"){
        ui->tableWidget->sortByColumn(1,Qt::DescendingOrder);
    }
}


void Widget::on_sortingAthor_currentTextChanged(const QString &arg1)
{
    if (arg1=="сортировка от А до Я"){
        ui->tableWidget->sortByColumn(2,Qt::AscendingOrder);
    }
    else if(arg1=="сортировка Я до А"){
        ui->tableWidget->sortByColumn(2,Qt::DescendingOrder);
    }
}


void Widget::on_sortingName_currentTextChanged(const QString &arg1)
{
    if (arg1=="сортировка от А до Я"){
        ui->tableWidget->sortByColumn(3,Qt::AscendingOrder);
    }
    else if(arg1=="сортировка Я до А"){
        ui->tableWidget->sortByColumn(3,Qt::DescendingOrder);
    }
}


void Widget::on_tableWidget_itemClicked(QTableWidgetItem *item)
{
    int row = item->row();
    int index = -1;
    for (int i{};i<books.size();i++){
        if ((books[i].m_SubjectMatter == ui->tableWidget->item(row,0)->text()) and (books[i].m_Genre == ui->tableWidget->item(row,1)->text()) and (books[i].m_Author == ui->tableWidget->item(row,2)->text())){// and (books[i].m_Name[i] == ui->tableWidget->item(row,3)->text())){// and (books[i].m_Price == ui->tableWidget->item(row,4)->text())){ // and (books[i].m_Translator == ui->tableWidget->item(row,6)->text())){
            index = i;
        }
    }
    if (index!=-1){
    emit itemClicked(ui->tableWidget->item(row,0)->text(),ui->tableWidget->item(row,1)->text(),ui->tableWidget->item(row,2)->text(),ui->tableWidget->item(row,3)->text(),ui->tableWidget->item(row,4)->text(),ui->tableWidget->item(row,6)->text(),ui->tableWidget->item(row,5)->text(),index);
    }
}


void Widget::on_pushButton_clicked()
{
    analitics *window_analis;
    window_analis = new analitics;


    window_analis->diagramm(CountAverageResearchLiterature(),CountAverageReligiousFolklore(),CountAverageTheology(),CountAverageBiographiesAndMemoirs(),CountAveragePopularScience(),CountAverageNovel(),CountAverageDetective(),CountAverageFantastic(),CountAverageRealism());
}


void Widget::on_tableWidget_itemDoubleClicked(QTableWidgetItem *item)
{


    int row = item->row();
    int index = -1;
    QString filepath;
    for (int i{};i<books.size();i++){
        if ((books[i].m_SubjectMatter == ui->tableWidget->item(row,0)->text()) and (books[i].m_Genre == ui->tableWidget->item(row,1)->text()) and (books[i].m_Author == ui->tableWidget->item(row,2)->text())){// and (books[i].m_Name[i] == ui->tableWidget->item(row,3)->text())){// and (books[i].m_Price == ui->tableWidget->item(row,4)->text())){ // and (books[i].m_Translator == ui->tableWidget->item(row,6)->text())){
            index = i;
        }
    }
    if (index!=-1){
        filepath = books[index].filepath;
        readBook *okno = new readBook(filepath);
        okno->resize(1000,1000);
        okno->chtenie();
    }




}

