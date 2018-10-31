#include <stdio.h>
#include <stdlib.h>
int main() {

    int x;
    int i;
    printf("Podaj liczbe");
    scanf("%d", &x);

    for(i = 1; x>i;i++){
        printf("%d\n", i);
    }


    return 0;
}
//2.8. Pobrać od użytkownika liczbę x. Za pomocą pętli for wypisać wszystkie liczby mniejsze od x, ale większe niż 0.