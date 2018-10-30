#include <stdio.h>

int main (){

    int x;
    int px;
    printf("Podaj liczbe");
    scanf("%d", &x);
    px = x;
    while(px <= 100000) {
        printf("%d\n", px);
        px = x * px;
    }




    return 0;
}
//2.3. Pobrać od użytkownika liczbę x. Należy wyświetlić wszystkie kolejne potęgi liczby x. Zakończyć program, kiedy liczba przekroczy 100
//000.