#include <stdio.h>

int Count(int N)
{
    int count = 0;
    if(N==0)
    {
        return 1;
    }
    while(N!=0)
    {
        N = N/10;
        count++;
    }
    return count;
}
int main(){
    int prefixe, id, code, numero_art, chiffre_cont;
    int Somme =0;
    do
    {
         printf("entrez l'ISBN : ");
        scanf("%d %d %d %d %d", &prefixe, &id, &code, &numero_art, &chiffre_cont);
        Somme = Count(prefixe) + Count(id) + Count(code) + Count(numero_art) + Count(chiffre_cont);


    } while ((prefixe != 978 && prefixe != 979) && Somme!=13);
        printf("%i-%i-%i-%i-%i", prefixe, id, code, numero_art, chiffre_cont);


    return 0;
}
