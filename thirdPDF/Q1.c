#include <stdbool.h>
#include <stdio.h>

int main(void) {
    bool digit_seen[10] = {false};
    bool digit_repeated[10] = {false};
    int digit;
    long n;

    printf("Entrez un nombre : ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit])
            digit_repeated[digit] = true;
        else
            digit_seen[digit] = true;

        n /= 10;
    }

    bool found = false;
    printf("Chiffre(s) répété(s) : ");
    for (int i = 0; i < 10; i++) {
        if (digit_repeated[i]) {
            printf("%d ", i);
            found = true;
        }
    }
    if (!found)
        printf("Aucun chiffre repete.\n");
    

    return 0;
}
