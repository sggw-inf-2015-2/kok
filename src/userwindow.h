#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QMainWindow>

namespace Ui {
class UserWindow;
}

class UserWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserWindow(QWidget *parent = 0);
    ~UserWindow();
    void resizeEvent(QResizeEvent *event) override;

private:
    Ui::UserWindow *ui;
};

#endif // USERWINDOW_H
