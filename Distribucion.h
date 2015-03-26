//
//  Distribucion.h
//  Marco de trabajo estadistica
//
//  Created by Alejandro on 3/25/15.
//
//

#include <stdio.h>
#include <math.h>

class Distribucion {
    //Calcula el valor de la funcion, dados los 3 parametros
public:
    double Gaussiana(double rX, double rMiu, double rVarianza);
    
    double ChiCuadrada(double rX, double rMiu, double rVarianza);
    
    double TStudent(double rX, double rMiu, double rVarianza);
};