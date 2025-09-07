#include <stdio.h>

int main(){

    int x, v;
    printf("entrez une valeur pour x: ");
    scanf("%d", &x);

    v=3*(x*x*x*x*x)+2*(x*x*x*x)-5*(x*x*x)-(x*x)+7*x-6;
    
    printf("la solution est: %d", v);
    return 0;
}