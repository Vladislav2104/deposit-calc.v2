#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "deposit.h"

int main() {
    int a, b;

    printf("vvedite rasmer vklada i srok\n");
    do {
        scanf("%d %d", &b, &a);
    } while (Chek(b, a));

    printf("v:%d s:%d\n", b, a);

    Dohod(b, a);

    return 0;
}
