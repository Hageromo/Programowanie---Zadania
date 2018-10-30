#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int x1, x2, x3;

    printf("Podaj wratosc x1 x2 x3\n");
    scanf("%d %d %d", &x1,&x2,&x3);

    if ((x1 > x2) && (x1 > x3)) {
        printf("Liczba x1 jest najwieksza");
    } else if (x2 > x1 && x2 > x3) {
        printf("Liczba x2 jest najwieksza");
    } else {
        printf("Liczba x3 jest najwieksza");
    }


    return EXIT_SUCCESS;
}
//1.5. Pobrać ud użytkownika 3 liczby (x1, x2, x3). Wyświetlić informację, która z tych liczb jest największa.