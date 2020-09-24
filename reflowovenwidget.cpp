#include "reflowovenwidget.h"
#include "ui_reflowovenwidget.h"

ReflowOvenWidget::ReflowOvenWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ReflowOvenWidget)
{
    ui->setupUi(this);
}

ReflowOvenWidget::~ReflowOvenWidget()
{
    delete ui;
}
