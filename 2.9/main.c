#include <stdio.h>
#include <stdlib.h>
int main() {

    int x;
    int i;
    printf("Podaj liczbe");
    scanf("%d", &x);

    for(i = x + 3; i<100 ;i=i+3) {
        printf("%d\n", i);
    }


    return 0;
}
//2.9. Pobrać od użytkownika liczbę x. Za pomocą pętli for wypisywać CO TRZECIĄ liczbę większą od x. Pętla powinna się zakończyć, jeśli
//liczba przekroczy 100. Uwaga - proszę nie używać operacji continue i break, a sterować tylko parametrami pętli.