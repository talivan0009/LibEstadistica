//
//  Dispersion.h
//  Marco de trabajo estadistica
//
//  Created by Alejandro on 3/25/15.
//
//

#include <stdio.h>
#include <math.c>

class Dispersion {
public:
    double VarianzaDouble(double* rListaIn);
    
    double DesviacionStd(double* rListaIn);
    
    double Rango(double* rListaIn);
};