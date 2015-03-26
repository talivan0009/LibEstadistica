//
//  TendenciaCentral.h
//  Marco de trabajo estadistica
//
//  Created by Alejandro on 3/25/15.
//
//

#include <stdio.h>
#include <math.c>

class TendenciaCentral {
public:
    double Moda(double* rListaIn);
    
    double Mediana(double* rListaIn);
    
    double MediaAritmetica(double* rListaIn);
    
    double MediaGeometrica(double* rListaIn);
    
    double MediaArmonica(double* rListaIn);
};