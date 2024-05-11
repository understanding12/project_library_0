#ifndef BOOK_H
#define BOOK_H
#include <QString>
#include <QTime>
#include<Qvector>
#include <QDebug>
class reviews
{
private:
    QString m_Review;
    double m_Rait;
public:
    QString GetReview(){
        return this->m_Review;
    }
    double GetRait(){
        return this->m_Rait;
    }
    void SetReview(QString a){this->m_Review = a;}
    void SetRait(double a){this->m_Rait = a;}

};

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
    QVector<reviews> m_Reviews;
    double m_averageRating{};
    void counteverage(){
        for (int i{};i<m_Reviews.size() - 1;i++)
        {
            m_averageRating = m_averageRating + m_Reviews[i].GetRait();

        }
        if (m_Reviews.size() > 0){
        m_averageRating = m_averageRating / (m_Reviews.size() - 1);
        }
    }
};

#endif // BOOK_H
