#include "correctwindow.h"
#include "ui_correctwindow.h"
correctWindow::correctWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::correctWindow)
{
    ui->setupUi(this);
    ui->startMatter->clear();
    ui->startMatter->addItems({"Художественная литература","Научная литература","Религиозная литература","Документальная литература"});
    ui->startGenre->addItems({"Реализм", "Фантастика", "Детектив", "Роман"});
}

correctWindow::~correctWindow()
{
    delete ui;
}

void correctWindow::on_startMatter_activated(int index)
{
    if(ui->startMatter->currentText()== "Художественная литература") {
        ui->startGenre->clear();
        ui->startGenre->addItems({"Реализм", "Фантастика", "Детектив", "Роман"});
    }
    if(ui->startMatter->currentText()== "Научная литература") {
        ui->startGenre->clear();
        ui->startGenre->addItems({"Научно-популярная литература", "Биографии и мемуары"});
    }
    if(ui->startMatter->currentText()== "Религиозная литература") {
        ui->startGenre->clear();
        ui->startGenre->addItems({"Богословие", "Религиозное фольклор"});
    }
    if(ui->startMatter->currentText()== "Документальная литература") {
        ui->startGenre->clear();
        ui->startGenre->addItems({"Исследовательская литература"});
    }
}

void correctWindow::fillLine(const QString &textMatter,const QString &textGenre,const QString &textAuthor,const QString &textName,const QString price,const QString textTime,const QString &textTranslate,int index)
{
    for (int i{};i<4;i++){
        if (ui->startMatter->itemText(i) == textMatter){
            ui->startMatter->setCurrentIndex(i);
        }
    }
    correctWindow:on_startMatter_activated(0);
    for (int i{};i<ui->startGenre->count();i++){
            if (ui->startGenre->itemText(i) == textGenre){
                ui->startGenre->setCurrentIndex(i);
            }
    }
    ui->startAuthor->setText(textAuthor);
    ui->startName->setText(textName);
    ui->startPrice->setText(price);
    ui->startTranslate->setText(textTranslate);
    ui->startTime->setText(textTime);
    correctWindow::correctindex = index;
}

    void correctWindow::on_pushButton_clicked()
    {
       // int i = correctWindow::correctindex;
      //  books[i].m_SubjectMatter =ui->startMatter->currentText();
       // books[i].m_Genre = ui->startGenre->currentText();
       // books[i].m_Author= ui->startAuthor->text();
       // books[i].m_Name=ui->startName->text();
       // books[i].m_Price=(ui->startPrice->text()).toInt();
       // books[i].m_Translator=ui->startTranslate->text();
       // books[i].m_Time=(ui->startTime->text()).toInt();
    }

