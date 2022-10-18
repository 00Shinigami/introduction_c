#include <stdio.h>

void changeValues(double a, double b)
{
    a = a * 0.9;
    b = b * 0.9;
}
void changeValuesWPointer(double *c, double *d)
{
    *c = *c * 0.9;
    *d = *d * 0.9;
}
int main(){
    double pApfel = 1.50, pBirne = 0.90;

    /*Erster Versuch die Werte zu ändern*/
    changeValues(a, b);
    printf("Preise: %.2f %.2f \n", pApfel, pBirne);
    /*Zweiter Versuch die Werte zu ändern*/
    changeValuesWPointer(&c, &d);
    printf("Preise: %.2f %.2f \n", pApfel, pBirne);
    return 0;
}