/*************************
*  Автор: Фенько А.Н.    *
*  Дата 24.09.2024       *
*  Название: Вариант №11 *
*************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double pi = 3.14159265358979323846;
    
    double E = 6;
    double e = 0.0885; 
    double l = 13;
    double r = 4.5;
    double R[] = {4.7, 4.8, 4.9, 5, 6, 7, 8, 9, 10};
    int i = 0;

    while(i<9){
        double C = (2*pi*E*e*l)/log(R[i]/r);
        cout << "R = " << R[i] << "           C = " << C << endl;
        i++;
    }
}