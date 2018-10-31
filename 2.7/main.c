#include <stdio.h>
#include <stdlib.h>
int main() {

    int x;
    int y;
    int i;
    printf("Wpisz liczby(spacja)");
    scanf("%d %d", &x, &y);

    for (i = 1; i + x !=  y; i= i+1){
    printf("%d\n", x + i);
    }

    return 0;
}

//2.7. Pobrać od użytkownika liczby x i y. Zakładamy, że y > x (zawsze, nie musimy tego sprawdzać). Za pomocą pętli for wypisać liczby
//między x a y (do przemyślenia - co jest stanem początkowym, a co warunkiem zakończenia pętli?)