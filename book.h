#ifndef BOOK_H
#define BOOK_H
#include <QString>
#include <QTime>
#include<Qvector>
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
    double counteverage(){
        for (reviews &x: m_Reviews)
        {
            this->m_averageRating = this->m_averageRating + x.GetRait();
        }
        this->m_averageRating = this->m_averageRating / (m_Reviews.size() - 1);
    }
};

#endif // BOOK_H
