#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCalendarWidget>
#include <QGridLayout>
#include <QTableWidget>
#include <QComboBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QCalendarWidget *calendar;
    QVBoxLayout *mainlayout;
    QGridLayout *top_layout;
    QHBoxLayout *bottom_layout;
    QGridLayout *top_grid_layout;
    QComboBox *weeks;

    QWidget *main_widget;
    QWidget *entry_widget;
    QTableWidget *edit_table;


    void init_ui();

};
#endif // MAINWINDOW_H
