#include <math.h>
double tam_vet(double x, double y){
    return sqrt(pow(x, 2) + pow(y, 2));
}

double atan_graus(double x, double y){
    return atan2(y, x) * 180 / 3.141592;
}
