#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QTextEdit>
#include "SimpleCalculator.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    // Constructor
    MainWindow(QWidget *parent = nullptr);
    // Destructor
    ~MainWindow();

    void init_ui();
    void QPushButton_0_Handle();
    void QPushButton_1_Handle();
    void QPushButton_2_Handle();
    void QPushButton_3_Handle();
    void QPushButton_4_Handle();
    void QPushButton_5_Handle();
    void QPushButton_6_Handle();
    void QPushButton_7_Handle();
    void QPushButton_8_Handle();
    void QPushButton_9_Handle();

    void QPushButton_Add_Handle();
    void QPushButton_Subtract_Handle();
    void QPushButton_Multiply_Handle();
    void QPushButton_Divide_Handle();
    void QPushButton_Equate_Handle();

    void format_screen(QStringList t, QString result);
    void handle_digit_buttons();



private:
    Ui::MainWindow *ui;
    QTextEdit *screen;
    QPushButton *QPushButton_0;
    QPushButton *QPushButton_1;
    QPushButton *QPushButton_2;
    QPushButton *QPushButton_3;
    QPushButton *QPushButton_4;
    QPushButton *QPushButton_5;
    QPushButton *QPushButton_6;
    QPushButton *QPushButton_7;
    QPushButton *QPushButton_8;
    QPushButton *QPushButton_9;

    QPushButton *QPushButton_Add;
    QPushButton *QPushButton_Subtract;
    QPushButton *QPushButton_Multiply;
    QPushButton *QPushButton_Divide;
    QPushButton *QPushButton_Equate;

    QStringList strList;

    SimpleCalculator s;
};
#endif // MAINWINDOW_H
