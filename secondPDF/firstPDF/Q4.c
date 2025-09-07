#include <stdio.h>
int main(){

    float m, mt;
    printf("ENtrez un montant : ");
    scanf("%f",&m);
    mt = m + m*0.05;

    printf("Avec taxe ajoutee : %.2lf", mt);

    return 0;
}