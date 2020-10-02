#include "reflowovenwidget.h"
#include "ui_reflowovenwidget.h"

#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QValueAxis>
#include <QFont>

ReflowOvenWidget::ReflowOvenWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ReflowOvenWidget)
{
    ui->setupUi(this);
    ui->verticalLayout->setAlignment(Qt::AlignTop);

    // instantiate chart and temperature profile series
    QChart *profileChart = new QChart();
    QLineSeries *selectedProfileSeries = new QLineSeries(profileChart);
    QLineSeries *liveProfileSeries = new QLineSeries(profileChart);

    // configure chart
    profileChart->legend()->hide();
    profileChart->setTitle("Reflow Profile");

    QValueAxis *xAxis = new QValueAxis();
    //QValueAxis *yAxis = new QValueAxis();
    xAxis->setRange(0, 300);
    xAxis->setTitleText("Time (s)");
    //yAxis->setRange(0, 250);
    xAxis->setTickCount(3);
    xAxis->setMinorTickCount(1);
    profileChart->setAxisX(xAxis);
    //profileChart->setAxisY(yAxis);

    profileChart->addSeries(selectedProfileSeries);
    profileChart->addSeries(liveProfileSeries);

    // create ChartView and add to the layout
    QChartView *chartView = new QChartView(profileChart);
    chartView->setRenderHint(QPainter::Antialiasing);
    ui->verticalLayout->addWidget(chartView);

    // going to need this
    // profileChart->update();

}

ReflowOvenWidget::~ReflowOvenWidget()
{
    delete ui;
}
