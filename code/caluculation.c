#include <stdio.h>

int main()
{
    /*Deklaration mit teilweise initialisierung*/
    int anzahlApfel = 2, anzahlBirne = 4;
    double preisApfel = 1.89, preisBirne = 2.52;
    double sumRechnung, preisMittel, preisDifferenz;
    /*Berechnung*/
    sumRechnung = anzahlApfel * preisApfel
    + anzahlBirne * preisBirne;

    preisMittel = sumRechnung / (anzahlApfel + anzahlBirne);
    preisDifferenz = preisApfel - preisBirne;
    /*Ausgabe*/
    printf("Summe der Rechnung: %2f Euro \n", sumRechnung);
    printf("Mittlerer Wert: %2f Euro \n", preisMittel);
    printf("Preis-Differenz: %2f Euro \n", preisDifferenz);

    return 0;
}
