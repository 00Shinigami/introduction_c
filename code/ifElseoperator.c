#include <stdio.h>

int main()
{
    double preisApfel = 1.45, preisBirne = 0.88, preisKiwi = 1.45;

    /*Größer*/
    if(preisApfel > preisBirne)
    printf("Apfel ist teurer als Birne \n");
    /*kleiner*/
    if(preisApfel < preisBirne)
    printf("Apfel ist günstiger als Birne \n");
    /*Größer oder gleich*/
    if(preisApfel >= preisKiwi)
    printf("Apfel ist mindestens so teuer wie kiwi \n");
    /*kleiner oder gleich*/
    if(preisBirne <= preisKiwi)
    printf("Birne ist hoechstens so teuer wie Kiwi \n");
    /*gleich*/
    if(preisApfel = preisBirne)
    printf("Apfel ist genauso teuer wie Birne \n");
    /*ungleich*/
    if(preisBirne != preisKiwi)
    printf("Birne und Kiwi haben unterschiedliche Preise\n");

    return 0;
}