#include <stdio.h>

int main () {

    int note, dizaine;

    printf("Entrez une note numérique : ");
    scanf("%d",&note);

    if (note > 0 || note < 100)
    {
        dizaine = note / 10;
        switch (dizaine)
        {
        case 9:
            printf ("Note littérale : A");
            break;
        case 8:
            printf ("Note littérale : B");
            break;

        case 7:
            printf ("Note littérale : C");
            break;

        case 6:
            printf ("Note littérale : D");
            break;  

        default:
             printf ("Note littérale : F");   
            break;
        }
    }
    
    return 0;
}