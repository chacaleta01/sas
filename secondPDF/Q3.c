#include <stdio.h>

typedef struct 
{
    int mois; 
    int jour;
    int annee;
    
}date;


int main(){
    date x, y;
    
    printf("eltrez la premierre date (mm/jj/aa): ");
    scanf("%d/%d/%d", &x.mois, &x.jour, &x.annee);
    
    printf("eltrez la deuxiemme date (mm/jj/aa): ");
    scanf("%d/%d/%d", &y.mois, &y.jour, &y.annee);

    if (x.annee <= y.annee)
    {
        printf("%d/%d/%d est plus tôt que %d/%d/%d", x.mois, x.jour, x.annee, y.mois, y.jour, y.annee);
    } else
    {
            if ((x.annee == y.annee) && (x.mois <= y.mois))
            {
                printf("%d/%d/%d est plus tôt que %d/%d/%d", x.mois, x.jour, x.annee, y.mois, y.jour, y.annee);
            } else
        {
            if ((x.annee == y.annee) && (x.mois == y.mois) && (x.jour <= y.jour))
            {
                printf("%d/%d/%d est plus tôt que %d/%d/%d", x.mois, x.jour, x.annee, y.mois, y.jour, y.annee);
            } else
            {
                printf("%d/%d/%d est plus tôt que %d/%d/%d", y.mois, y.jour, y.annee, x.mois, x.jour, x.annee);
            }
            
            
        }
            
        } 
        
        return 0;
    }
    
    


