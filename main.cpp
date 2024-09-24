/*************************
*  Автор: Фенько А.Н.    *
*  Дата 17.09.2024       *
*  Название: Вариант №11 *
* ***********************/


#include <iostream>
#include <math.h>

using namespace std;

int main() {
    const double pi = 3.14159265358979323846;
    
    double E = 6;
    double e = 0.0885; 
    
    double l = 13;
    double r = 4.5;
    double R = 4.7;
    
    double C = (2*pi*E*e*l)/log(R/r);
    
    cout << "Продолжительность:" << C << endl;
}