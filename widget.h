#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTreeWidgetItem>
#include <QTableWidgetItem>
#include "book.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    double CountAverageResearchLiterature()
    {
        double average{};
        int count{};
        for (book x: books){
            if(x.m_Genre == "Исследовательская литература"){
                average = average + x.m_averageRating;
                count++;
            }
        }
        return (double) average / count;
    }
    double CountAverageReligiousFolklore()
    {
        double average{};
        int count{};
        for (book x: books){
            if(x.m_Genre == "Религиозный фольклор"){
                average = average + x.m_averageRating;
                count++;
            }
        }
        return (double) average / count;
    }
    double CountAverageTheology()
    {
        double average{};
        int count{};
        for (book x: books){
            if(x.m_Genre == "Богословие"){
                average = average + x.m_averageRating;
                count++;
            }
        }
        return (double) average / count;
    }
    double CountAverageBiographiesAndMemoirs()
    {
        double average{};
        int count{};
        for (book x: books){
            if(x.m_Genre == "Биографии и мемуары"){
                average = average + x.m_averageRating;
                count++;
            }
        }
        return (double) average / count;
    }
    double CountAveragePopularScience()
    {
        double average{};
        int count{};
        for (book x: books){
            if(x.m_Genre == "Научно-популярная литература"){
                average = average + x.m_averageRating;
                count++;
            }
        }
        return (double) average / count;
    }
    double CountAverageNovel()
    {
        double average{};
        int count{};
        for (book x: books){
            if(x.m_Genre == "Роман"){
                average = average + x.m_averageRating;
                count++;
            }
        }
        return (double) average / count;
    }
    double CountAverageDetective()
    {
        double average{};
        int count{};
        for (book x: books){
            if(x.m_Genre == "Детектив"){
                average = average + x.m_averageRating;
                count++;
            }
        }
        return (double) average / count;
    }
    double CountAverageFantastic()
    {
        double average{};
        int count{};
        for (book x: books){
            if(x.m_Genre == "Фантастика"){
                average = average + x.m_averageRating;
                count++;
            }
        }
        return (double) average / count;
    }

    double CountAverageRealism()
    {
        double average{};
        int count{};
        for (book x: books){
            if(x.m_Genre == "Реализм"){
            average = average + x.m_averageRating;
                count++;
            }
        }
        return (double) average / count;
    }

public slots:
    void correctirivka(const QString &textMatter,const QString &textGenre,const QString &textAuthor,const QString &textName,const QString price,const QString textTime,const QString &textTranslate,int index);
signals:
    void itemClicked(const QString &textMatter,const QString &textGenre,const QString &textAuthor,const QString &textName,const QString price,const QString textTime,const QString &textTranslate,int index);
private slots:
    void on_addBook_clicked();

    void on_deleteBook_clicked();

    void on_treeWidget_itemClicked(QTreeWidgetItem *item, int column);

    void on_Exit_clicked();

    void on_correctBook_clicked();

    void on_searchLine_textChanged(const QString &arg1);

    void on_saveButton_clicked();

    void on_priceSort_currentTextChanged(const QString &arg1);

    void on_timeSort_currentTextChanged(const QString &arg1);

    void on_sortingMatter_currentTextChanged(const QString &arg1);

    void on_sortingGenre_currentTextChanged(const QString &arg1);

    void on_sortingAthor_currentTextChanged(const QString &arg1);

    void on_sortingName_currentTextChanged(const QString &arg1);

    void on_tableWidget_itemClicked(QTableWidgetItem *item);

    void on_pushButton_clicked();

private:
    void saveToFile();
    virtual void keyPressEvent(QKeyEvent *event);
    QVector <book> books;
    QVector<QTreeWidgetItem*> Matters;
    QStringList matterNames = {"Художественная литература","Научная литература","Религиозная литература","Документальная литература"};
    QVector<QTreeWidgetItem*> Genres;
    QStringList genreNames[4] = {{"Реализм", "Фантастика", "Детектив", "Роман"},{"Научно-популярная литература", "Биографии и мемуары"},{"Богословие", "Религиозное фольклор"},{"Исследовательская литература"}};
    Ui::Widget *ui;
    int treeCount(QTreeWidget *, QTreeWidgetItem *); //подсчёт количества элементов в QTreeWidget
    void DeleteItem (QTableWidgetItem *currentItem); //удаление элемента из QTreeWidget
    void addToTable(book book);
    void InsertItem (QTreeWidgetItem *, QString); //добавление элемента в QTreeWidget
    // void showAll(void); //вывод информации о QTreeWidget
    int count; //переменная для хранения номера очередного узла
    QTreeWidgetItem *currentItem; //текущий элемент, запоминается при клике в QTreeWidget
    int currentColumn; //номер столбца, на самом деле будет = 0, т.к. у нас 1 столбец
};

#endif // WIDGET_H
