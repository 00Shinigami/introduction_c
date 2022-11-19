#include <stdio.h>

int main(){
    double preis;
    double *preiszeiger;

    preiszeiger = &preis;

    printf("%.2f\n", preis);
    printf("%.2f\n", *preiszeiger);
    return  0;
}