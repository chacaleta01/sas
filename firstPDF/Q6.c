#include <stdio.h>
int main (){
    int x, v;
    printf("entrez une valeur pour x: ");
    scanf("%d", &x);

    v=((((3*x+2)*x-5)*x-1)*x+7)*x-6;
    
    printf("la solution est: %d", v);

    return 0;
}