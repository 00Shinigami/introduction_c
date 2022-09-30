#include <stdio.h>

int main() {
     char* receiver[100];
     int attachments = 2;

    scanf("%[^\n]", &receiver);

    printf("Sehr geehrter %s,\n\n ", receiver);
    printf("anbei einmal die Gewünschten Daten! \n\n");
    printf("Anhänge: %d", attachments);

    return 0;
}