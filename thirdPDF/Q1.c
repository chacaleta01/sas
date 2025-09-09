#include <stdio.h>
#include <stdbool.h>
int main (){
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("ENtrez un nombre: ");
    scanf("%ld", &n);

    while (n>0)
    {
        digit = n % 10;
        if (digit_seen[digit])
        {
            break;
        }
        digit_seen[digit] = true;
        n /= 10;
    }
    if (n > 0)
    {
        printf("Des chiffres sont repetes.\n");
    } else
    {
        printf("aucun chiffre repete. \n");
    }
    return 0;
}