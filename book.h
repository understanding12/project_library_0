#ifndef BOOK_H
#define BOOK_H
#include <QString>
#include <QTime>

class book
{
public:
    book();
    QString m_SubjectMatter;
    QString m_Genre;
    QString m_Author;
    QString m_Name;
    int m_Price;
    QString m_Translator;
    QTime m_Time;
};

#endif // BOOK_H
