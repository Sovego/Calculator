#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Button_clear_clicked()
{
    ui->textEdit->clear();

}


void MainWindow::on_Button_one_clicked()
{
    ui->textEdit->setText(ui->textEdit->toPlainText()+"1");
}


void MainWindow::on_Button_two_clicked()
{
    ui->textEdit->setText(ui->textEdit->toPlainText()+"2");
}


void MainWindow::on_Button_three_clicked()
{
    ui->textEdit->setText(ui->textEdit->toPlainText()+"3");
}


void MainWindow::on_Button_four_clicked()
{
    ui->textEdit->setText(ui->textEdit->toPlainText()+"4");
}


void MainWindow::on_Button_five_clicked()
{
    ui->textEdit->setText(ui->textEdit->toPlainText()+"5");
}


void MainWindow::on_Button_six_clicked()
{
    ui->textEdit->setText(ui->textEdit->toPlainText()+"6");
}


void MainWindow::on_Button_seven_clicked()
{
    ui->textEdit->setText(ui->textEdit->toPlainText()+"7");
}


void MainWindow::on_Button_eight_clicked()
{
    ui->textEdit->setText(ui->textEdit->toPlainText()+"8");
}


void MainWindow::on_Button_nine_clicked()
{
    ui->textEdit->setText(ui->textEdit->toPlainText()+"9");
}


void MainWindow::on_Button_zero_clicked()
{
    ui->textEdit->setText(ui->textEdit->toPlainText()+"0");
}


void MainWindow::on_Button_leftbracket_clicked()
{
    ui->textEdit->setText(ui->textEdit->toPlainText()+"(");
}


void MainWindow::on_Button_rightbracket_clicked()
{
    ui->textEdit->setText(ui->textEdit->toPlainText()+")");
}


void MainWindow::on_Button_plus_clicked()
{
    ui->textEdit->setText(ui->textEdit->toPlainText()+"+");
}


void MainWindow::on_Button_minus_clicked()
{
    ui->textEdit->setText(ui->textEdit->toPlainText()+"-");
}


void MainWindow::on_Button_asterisk_clicked()
{
    ui->textEdit->setText(ui->textEdit->toPlainText()+"*");
}


void MainWindow::on_Button_slesh_clicked()
{
    ui->textEdit->setText(ui->textEdit->toPlainText()+"/");
}


void MainWindow::on_actionExit_triggered()
{
    QApplication::exit(0);
}


void MainWindow::on_actionHelp_triggered()
{
    QMessageBox::information(this,"Help","This is simple calculator");
}


void MainWindow::on_Button_calc_clicked()
{
    QString str = ui->textEdit->toPlainText();
    std::string strs =  str.toStdString();
    ui->textEdit->setText(QString::fromStdString(Calculator::calculate(strs)));

}
void MainWindow::keyPressEvent( QKeyEvent * event )
{
    switch(event->key())
    {
        case Qt::Key_0: {ui->textEdit->setText(ui->textEdit->toPlainText()+"0"); break;}
        case Qt::Key_1: {ui->textEdit->setText(ui->textEdit->toPlainText()+"1"); break;}
        case Qt::Key_2: {ui->textEdit->setText(ui->textEdit->toPlainText()+"2"); break;}
        case Qt::Key_3: {ui->textEdit->setText(ui->textEdit->toPlainText()+"3"); break;}
        case Qt::Key_4: {ui->textEdit->setText(ui->textEdit->toPlainText()+"4"); break;}
        case Qt::Key_5: {ui->textEdit->setText(ui->textEdit->toPlainText()+"5"); break;}
        case Qt::Key_6: {ui->textEdit->setText(ui->textEdit->toPlainText()+"6"); break;}
        case Qt::Key_7: {ui->textEdit->setText(ui->textEdit->toPlainText()+"7"); break;}
        case Qt::Key_8: {ui->textEdit->setText(ui->textEdit->toPlainText()+"8"); break;}
        case Qt::Key_9: {ui->textEdit->setText(ui->textEdit->toPlainText()+"9"); break;}
        case Qt::Key_Plus: {ui->textEdit->setText(ui->textEdit->toPlainText()+"+"); break;}
        case Qt::Key_Minus: {ui->textEdit->setText(ui->textEdit->toPlainText()+"-"); break;}
        case Qt::Key_Asterisk: {ui->textEdit->setText(ui->textEdit->toPlainText()+"*"); break;}
        case Qt::Key_Slash: {ui->textEdit->setText(ui->textEdit->toPlainText()+"/"); break;}
        case Qt::Key_Equal: {
                                 QString str = ui->textEdit->toPlainText();
                                 std::string strs =  str.toStdString();
                                 ui->textEdit->setText(QString::fromStdString(Calculator::calculate(strs)));
                                 break;
                            }
        case Qt::Key_Enter: {
                             QString str = ui->textEdit->toPlainText();
                             std::string strs =  str.toStdString();
                             ui->textEdit->setText(QString::fromStdString(Calculator::calculate(strs)));
                             break;
                        }
        case Qt::Key_ParenLeft: {ui->textEdit->setText(ui->textEdit->toPlainText()+"("); break;}
        case Qt::Key_ParenRight: {ui->textEdit->setText(ui->textEdit->toPlainText()+")"); break;}
        case Qt::Key_Backspace: {
                                    if (ui->textEdit->toPlainText().length()!=0)
                                    {
                                    ui->textEdit->setText(ui->textEdit->toPlainText().remove(ui->textEdit->toPlainText().length()-1,1));
                                    break;
                                    } else break;
                                }
    }
}
