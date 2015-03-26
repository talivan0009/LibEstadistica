//
//  FuncionesEstimacion.h
//  Marco de trabajo estadistica
//
//  Created by Alejandro on 3/25/15.
//
//

#include <stdio.h>
#include <math.h>

class FuncionesEstimacion {
public:
    double* RegresionLineal(double* rListaX,double* rListaY, int rNumero); /*regresa 2 valores, cruce con Y y pendiente */
    
    double Correlacion(double* rListaIn1, double* rListaIn2);
};