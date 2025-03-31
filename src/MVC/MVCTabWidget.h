#ifndef MVCTABWIDGET_H
#define MVCTABWIDGET_H

#include <QWidget>
#include <QTabWidget>
class MVCTabWidget : public QTabWidget
{
    Q_OBJECT
public:
    MVCTabWidget(QTabWidget* parent = nullptr);
    virtual ~MVCTabWidget();
private:
};

#endif // MVCTABWIDGET_H
