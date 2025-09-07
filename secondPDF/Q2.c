#include <stdio.h>

int main(){

    int nombre, first, second;

     printf("Entrez un nombre à deux chiffres: ");
     scanf("%d", &nombre);

    if (nombre >= 10 && nombre <=99)
    {
        second = nombre % 10;
        first = nombre / 10;

        printf("Le nombre inversé est: %d%d", second, first);
    } else
    {
        printf("relancer le code avec un nombre de deux chiffres :) ");
    }
    
    

    return 0;
}