#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    int sign(int);

    void BresenhamSolidLine(int  , int , int , int , QImage &);

    void BresenhamDottedLine(int  , int , int , int , QImage &);

    void BresenhamDashedLine(int  , int , int , int , QImage &);

    void BresenhamDashedDottedLine(int  , int , int , int , QImage &);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
