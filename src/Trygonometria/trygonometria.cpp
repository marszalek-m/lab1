#include "trygonometria.h"
#include <cmath>
double degreemath::sin_degree(double degree) {
double pi = 3.141592627;
 double radian = pi/180 * degree;
return std::sin(radian);
}

double degreemath::cos_degree(double degree) {
double pi = 3.141592627;
 double radian = pi/180 * degree;
return std::cos(radian);
}

double degreemath::tg_degree(double degree) {
double pi = 3.141592627;
 double radian = pi/180 * degree;
return std::tan(radian);
}

double degreemath::ctg_degree(double degree) {
double pi = 3.141592627;
 double radian = pi/180 * degree;
 double wynik = 1/tan(radian);
return wynik;
}