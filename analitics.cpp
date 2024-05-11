#include "analitics.h"
#include "ui_analitics.h"

analitics::analitics(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::analitics)
{
    ui->setupUi(this);


}

analitics::~analitics()
{
    delete ui;
}

void analitics::diagramm(double s1,double s2,double s3,double s4,double s5,double s6,double s7,double s8,double s9)
{
    QtCharts::QChart *chart = new QtCharts::QChart();

    // Создаем объект серии данных
    QtCharts::QBarSeries *series = new QtCharts::QBarSeries();

    // Создаем и добавляем данные в серию
    QtCharts::QBarSet *set1 = new QtCharts::QBarSet("Исследовательская литература");
    *set1 << s1;
    series->append(set1);

    QtCharts::QBarSet *set = new QtCharts::QBarSet("Религиозный фольклор");
    *set << s2;
    series->append(set);

    QtCharts::QBarSet *set2 = new QtCharts::QBarSet("Богословие");
    *set2 << s3;
    series->append(set2);

    QtCharts::QBarSet *set3 = new QtCharts::QBarSet("Биографии и мемуары");
    *set3 << s4;
    series->append(set3);

    QtCharts::QBarSet *set4 = new QtCharts::QBarSet("Научно-популярная литература");
    *set4 << s5;
    series->append(set4);

    QtCharts::QBarSet *set5 = new QtCharts::QBarSet("Роман");
    *set5 << s6;
    series->append(set5);

    QtCharts::QBarSet *set6 = new QtCharts::QBarSet("Детектив");
    *set6 << s7;
    series->append(set6);


    QtCharts::QBarSet *set7 = new QtCharts::QBarSet("Фантастика");
    *set7 << s8;
    series->append(set7);

    QtCharts::QBarSet *set8 = new QtCharts::QBarSet("Реализм");
    *set8 << s9;
    series->append(set8);


    chart->addSeries(series);

    // Создаем ось X
    QtCharts::QBarCategoryAxis *axisX = new QtCharts::QBarCategoryAxis();
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    // Создаем ось Y
    QtCharts::QValueAxis *axisY = new QtCharts::QValueAxis();
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    // Создаем виджет для отображения диаграммы
    QtCharts::QChartView *chartView = new QtCharts::QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    chartView->show();
}
