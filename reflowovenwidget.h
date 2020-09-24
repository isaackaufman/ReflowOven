#ifndef REFLOWOVENWIDGET_H
#define REFLOWOVENWIDGET_H

#include <QWidget>

namespace Ui {
class ReflowOvenWidget;
}

class ReflowOvenWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ReflowOvenWidget(QWidget *parent = nullptr);
    ~ReflowOvenWidget();

private:
    Ui::ReflowOvenWidget *ui;
};

#endif // REFLOWOVENWIDGET_H
