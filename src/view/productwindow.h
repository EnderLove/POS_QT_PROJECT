#ifndef PRODUCTWINDOW_H
#define PRODUCTWINDOW_H

#include <QWidget>

namespace Ui {
class productwindow;
}

class productwindow : public QWidget
{
    Q_OBJECT

public:
    explicit productwindow(QWidget *parent = nullptr);
    ~productwindow();

private:
    Ui::productwindow *ui;
};

#endif // PRODUCTWINDOW_H
