#include <stdio.h>
#include<stdlib.h>
int main(void) {

    int a;
    printf("Podaj wartosc a=");
    scanf("%d", &a);
    if (a > 0)
        printf("Liczba jest wieksza od zera\n");

    if (a == 0)
        printf("Liczba jest rowna zeru\n");
    if (a < 0)
        printf("Liczba jest mniejsza od zera\n");


    return EXIT_SUCCESS;
}

//1.4. Zapoznać się z instrukcjami warunkowymi (if, else if, else oraz switch). Pobrać od używkownika liczbę i wyświetlić informację, czy jest
//ona: mniejsza, większa, czy równa 0.