#ifndef READBOOK_H
#define READBOOK_H
#include <QAxObject>
#include <QWidget>
#include<QString>
namespace Ui {
class readBook;
}

class readBook : public QWidget
{
    Q_OBJECT
public:
    readBook(QString filepath){
        this->filepath = filepath;
    }
public:
    explicit readBook(QWidget *parent = nullptr);
    QString filepath;
    QString TEXT;
    void chtenie();
    ~readBook();

private:
    Ui::readBook *ui;
};

#endif // READBOOK_H
