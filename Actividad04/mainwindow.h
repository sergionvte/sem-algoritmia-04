#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSpinBox>
#include <QDoubleSpinBox>
#include <QTextEdit>
#include <list>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

// CLASE NEURONA
class Neurona {
private:
    int id;
    float voltaje;
    int posicion_x;
    int posicion_y;
    int red;
    int green;
    int blue;
public:
    Neurona(int, float, int, int, int, int, int);
    Neurona();
    ~Neurona();
    void print();
    int get_id();
    float get_voltaje();
    int get_posicionX();
    int get_posicionY();
    int get_red();
    int get_green();
    int get_blue();
    void set_id(int);
    void set_voltaje(float);
    void set_posicionX(int);
    void set_posicionY(int);
    void set_red(int);
    void set_green(int);
    void set_blue(int);
};

// CLASE LISTANEURONA
class ListaNeuronas {
private:
    std::list<Neurona> lista;
public:
    void insertar_inicio(const Neurona& neurona);
    void insertar_final(const Neurona& neurona);
    std::string mostrar();

};


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_submit_start_clicked();

    void on_submit_end_clicked();

    void on_show_neurons_clicked();

private:
    Ui::MainWindow *ui;
    QSpinBox *id_spinBox;
    QDoubleSpinBox *voltaje_spinBox;
    QSpinBox *posicionX_spinBox;
    QSpinBox *posicionY_spinBox;
    QSpinBox *red_spinBox;
    QSpinBox *green_spinBox;
    QSpinBox *blue_spinBox;
    QTextEdit *output;
    ListaNeuronas lista;
};


#endif // MAINWINDOW_H
