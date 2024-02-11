#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "mainwindow.h"
#include <iostream>
#include <sstream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // spinboxes
    id_spinBox = findChild<QSpinBox*>("id_spinBox");
    voltaje_spinBox = findChild<QDoubleSpinBox*>("voltaje_spinBox");
    posicionX_spinBox = findChild<QSpinBox*>("posicionX_spinBox");
    posicionY_spinBox = findChild<QSpinBox*>("posicionY_spinBox");
    red_spinBox = findChild<QSpinBox*>("red_spinBox");
    green_spinBox = findChild<QSpinBox*>("green_spinBox");
    blue_spinBox = findChild<QSpinBox*>("blue_spinBox");
    output = findChild<QTextEdit*>("output");
}

MainWindow::~MainWindow()
{
    delete ui;
}


Neurona::Neurona(int _id, float _voltaje, int _posicion_x, int _posicion_y, int _red, int _green, int _blue) {
    id = _id;
    voltaje = _voltaje;
    posicion_x = _posicion_x;
    posicion_y = _posicion_y;
    red = _red;
    green = _green;
    blue = _blue;
}

Neurona::Neurona() {}

Neurona::~Neurona() {}

void Neurona::print() {
    std::cout << "NEURONA " << id << std::endl << std::endl
              << "voltaje: " << voltaje << std::endl
              << "posicion x: " << posicion_x << std::endl
              << "posicion y" << posicion_y << std::endl
              << "red: " << red << std::endl
              << "green: " << green << std::endl
              << "blue: " << blue << std::endl
              << std::endl;
}

int Neurona::get_id() { return id; }
float Neurona::get_voltaje() { return voltaje; }
int Neurona::get_posicionX() { return posicion_x; }
int Neurona::get_posicionY() { return posicion_y; }
int Neurona::get_red() { return red; }
int Neurona::get_green() { return green; }
int Neurona::get_blue() { return blue; }
void Neurona::set_id(int _id) { id = _id; }
void Neurona::set_voltaje(float _voltaje) { voltaje = _voltaje; }
void Neurona::set_posicionX(int _posicionX) { posicion_x = _posicionX; }
void Neurona::set_posicionY(int _posicionY) { posicion_y = _posicionY; }
void Neurona::set_red(int _red) { red = _red; }
void Neurona::set_green(int _green) { green = _green; }
void Neurona::set_blue(int _blue) { blue = _blue; }

void ListaNeuronas::insertar_inicio(const Neurona& neurona) {
    lista.push_front(neurona);
}

void ListaNeuronas::insertar_final(const Neurona& neurona) {
    lista.push_back(neurona);
}

std::string ListaNeuronas::mostrar() {
    std::stringstream ss; // Crear un stringstream para construir la cadena
    for (std::list<Neurona>::iterator it = lista.begin(); it != lista.end(); ++it) {
        int id_actual = it->get_id();
        float voltaje_actual = it->get_voltaje();
        int posicion_x_actual = it->get_posicionX();
        int posicion_y_actual = it->get_posicionY();
        int red_actual = it->get_red();
        int green_actual = it->get_green();
        int blue_actual = it->get_blue();

        // Agregar los elementos a la cadena
        ss << "Neurona " << id_actual << std::endl
           << "  voltaje: " << voltaje_actual << std::endl
           << "  posicion x: " << posicion_x_actual << std::endl
           << "  posicion y: " << posicion_y_actual << std::endl
           << "  red: " << red_actual << std::endl
           << "  green: " << green_actual << std::endl
           << "  blue: " << blue_actual << std::endl << std::endl;

    }
    return ss.str();
}

void MainWindow::on_submit_start_clicked()
{
    Neurona n;
    n.set_id(id_spinBox->value());
    n.set_voltaje(voltaje_spinBox->value());
    n.set_posicionX(posicionX_spinBox->value());
    n.set_posicionY(posicionY_spinBox->value());
    n.set_red(red_spinBox->value());
    n.set_green(green_spinBox->value());
    n.set_blue(blue_spinBox->value());

    lista.insertar_inicio(n);
}


void MainWindow::on_submit_end_clicked()
{
    Neurona n;
    n.set_id(id_spinBox->value());
    n.set_voltaje(voltaje_spinBox->value());
    n.set_posicionX(posicionX_spinBox->value());
    n.set_posicionY(posicionY_spinBox->value());
    n.set_red(red_spinBox->value());
    n.set_green(green_spinBox->value());
    n.set_blue(blue_spinBox->value());

    lista.insertar_final(n);
}


void MainWindow::on_show_neurons_clicked()
{
    output->clear();
    QString cadena_qstring = QString::fromStdString(lista.mostrar());
    output->insertPlainText(cadena_qstring);
}

