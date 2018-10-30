#include <stdio.h>
#include<stdlib.h>
int main() {

    int x;
    printf("Podaj liczbe");
    scanf("%d", &x);

    while (x > 0){
        x = x - 1;
                printf("%d\n", x);
    }


    return 0;
}
//2.4. Pobrać od użytkownika liczbę x. Jeśli liczba jest niedodatnia - należy zakończyć program. Następnie należy wyświetlać kolejno (w
//nowej linii) wszystkie liczby mniejsze od x, aż osiągnięte zostanie 0.