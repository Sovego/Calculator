#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qpushbutton.h"
#include <QMainWindow>
#include <QMessageBox>
#include "calculator.h"
#include <QKeyEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Button_clear_clicked();

    void on_Button_one_clicked();

    void on_Button_two_clicked();

    void on_Button_three_clicked();

    void on_Button_four_clicked();

    void on_Button_five_clicked();

    void on_Button_six_clicked();

    void on_Button_seven_clicked();

    void on_Button_eight_clicked();

    void on_Button_nine_clicked();

    void on_Button_zero_clicked();

    void on_Button_leftbracket_clicked();

    void on_Button_rightbracket_clicked();

    void on_Button_plus_clicked();

    void on_Button_minus_clicked();

    void on_Button_asterisk_clicked();

    void on_Button_slesh_clicked();

    void on_actionExit_triggered();

    void on_actionHelp_triggered();

    void on_Button_calc_clicked();

private:
    Ui::MainWindow *ui;
    QPushButton *m_button;
    void handlebutton();
    void keyPressEvent(QKeyEvent * event);
};
#endif // MAINWINDOW_H
