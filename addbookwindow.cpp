#include "addbookwindow.h"
#include "ui_addbookwindow.h"
#include <QErrorMessage>
#include <QFileDialog>
#include <QMessageBox>

AddBookWindow::AddBookWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddBookWindow)
{
    ui->setupUi(this);
    tbook.m_SubjectMatter = ui->addMatter->currentText();
    tbook.m_Genre = ui->addGenre->currentText();
    if (ui->addAuthor->text().length()>0){tbook.m_Author = ui->addAuthor->text();}
    else{ QErrorMessage error; error.showMessage("Заполните поле <Автор>"); }
    tbook.m_Name = ui->addName->text();
    tbook.m_Price = ui->addPrice->text().toInt();
    tbook.m_Translator = ui->addTranslator->text();
    tbook.m_Time = ui->timeEdit->time();
}

AddBookWindow::~AddBookWindow()
{
    delete ui;
}

void AddBookWindow::on_CanselButton_clicked()
{
    close();
}

void AddBookWindow::setupMatters(QVector<QTreeWidgetItem*> items, int column){
    QStringList data;
    for (QTreeWidgetItem* item : items){
        QString temp;
        temp = item->text(column);
        data << temp;
    }
    ui->addMatter->addItems(data);
}

void AddBookWindow::setupGenres(){
    ui->addGenre->addItems({"Реализм", "Фантастика", "Детектив", "Роман"});

    connect(ui->addMatter, QOverload<int>::of(&QComboBox::currentIndexChanged), [this](const int &index){
        if(ui->addMatter->itemText(index)== "Художественная литература") {
            ui->addGenre->clear();
            ui->addGenre->addItems({"Реализм", "Фантастика", "Детектив", "Роман"});
        }
        if(ui->addMatter->itemText(index)== "Научная литература") {
            ui->addGenre->clear();
            ui->addGenre->addItems({"Научно-популярная литература", "Биографии и мемуары"});
        }
        if(ui->addMatter->itemText(index)== "Религиозная литература") {
            ui->addGenre->clear();
            ui->addGenre->addItems({"Богословие", "Религиозное фольклор"});
        }
        if(ui->addMatter->itemText(index)== "Документальная литература") {
            ui->addGenre->clear();
            ui->addGenre->addItems({"Исследовательская литература"});
        }
    });
}

void AddBookWindow::on_addButton_clicked()
{
    tbook.m_SubjectMatter = ui->addMatter->currentText();
    tbook.m_Genre = ui->addGenre->currentText();
    tbook.m_Author = ui->addAuthor->text();
    tbook.m_Name = ui->addName->text();
    tbook.m_Price = ui->addPrice->text().toInt();
    tbook.m_Translator = ui->addTranslator->text();
    tbook.m_Time = ui->timeEdit->time();
    isAddButtonClicked = true;
    close();
}



void AddBookWindow::on_addFileButton_clicked()
{
    QString filter = "All files (*.*) ;; Text files (*.txt) ;; Word files (*.doc) ;; Word files (*.docx) ;; PDF files (*.pdf)";
    fileName = QFileDialog::getOpenFileName(this, "Open a file", "C://", filter);
    tbook.filepath = fileName;
    QStringList file = fileName.split("/");
    ui->addFileButton->setText(file.at(file.size()-1));
}
