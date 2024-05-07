#ifndef MAINWINDOWFORTIMECALCULOUS_H
#define MAINWINDOWFORTIMECALCULOUS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindowForTimeCalculous;
}
QT_END_NAMESPACE

class MainWindowForTimeCalculous : public QMainWindow
{
    Q_OBJECT

public:
    MainWindowForTimeCalculous(QWidget *parent = nullptr);
    ~MainWindowForTimeCalculous();

private:
    Ui::MainWindowForTimeCalculous *ui;
};
#endif // MAINWINDOWFORTIMECALCULOUS_H
