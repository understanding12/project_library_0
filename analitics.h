#ifndef ANALITICS_H
#define ANALITICS_H

#include <QWidget>
#include <QtCharts>
#include<QChartView>
#include<QBarSet>
namespace Ui {
class analitics;
}

class analitics : public QWidget
{
    Q_OBJECT

public:
    explicit analitics(QWidget *parent = nullptr);
    ~analitics();
    void diagramm(double s1,double s2,double s3,double s4,double s5,double s6,double s7,double s8,double s9);

private:
    Ui::analitics *ui;
};

#endif // ANALITICS_H
