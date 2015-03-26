//
//  Graficador.h
//  Marco de trabajo estadistica
//
//  Created by Alejandro on 3/25/15.
//
//

#include <stdio.h>
#include <math.h>
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#include "FuncionesEstimacion.h"
#include "Distribucion.h"
#include "TendenciaCentral.h"
#include "Distribucion.h"
#include "Dispersion.h"

class Graficador {
public:
    void VarianzaDouble(double* rListaIn);
    
    void ResviacionStd(double* rListaIn);
    
    void Rango(double* rListaIn);
    
    void Moda(double* rListaIn);
    
    void Mediana(double* rListaIn);
    
    void MediaAritmetica(double* rListaIn);
    
    void MediaGeometrica(double* rListaIn);
    
    void MediaArmonica(double* rListaIn);
    
    void Gaussiana(double rX, double rMiu, double rVarianza);
    
    void ChiCuadrada(double rX, double rMiu, double rVarianza);
    
    void TStudent(double rX, double rMiu, double rVarianza);
    
    void RegresionLineal(double* rListaX,double* rListaY, int rNumero);
    
    void Correlacion(double* rListaIn1, double* rListaIn2);
};
