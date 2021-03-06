#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include "person.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QVector<Person> listPerson;

private slots:
    void on_button_Clear_clicked();

    void on_button_Save_clicked();

    void on_button_ShowAllPersons_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
