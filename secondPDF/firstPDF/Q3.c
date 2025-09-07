#include <stdio.h>
int main(){

    
    float r, v, Pi;
    Pi = 3.14;
    printf("entrez le rayon du sphere : ");
    scanf("%f", &r);
    v = 4.0f/3.0f*Pi*(r*r*r);
    printf("le volume du sphere est: %lf", v);

    return 0;
}