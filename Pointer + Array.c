#include <stdio.h>

int main() {
    int num[4] = {1, 2, 3, 4};
    int *p, *q;

    p = num;
    q = p;

    printf("%i\n", *p);

    p++;
    printf("%i\n", *p);

    printf("%i\n", *q);

    printf("%i\n", *(p + 2));

    return 0;
}
