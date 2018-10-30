#include <stdio.h>
#include<stdlib.h>
int main() {

    int x;
    do{
        scanf("%d", &x );
        printf("\n%d", x);
    } while (x != 0);


    return 0;
}

//2.1. Zapoznać się z pętlą while. Pętla ta służy do wielokrotnego wykonania fragmentu kodu przez NIEZNANĄ Z GÓRY ilość razy. Pętla
//wykonuje się zawsze, jeśli warunek jest prawdziwy (ewaluowany do true). Napisać pętlę, w któej użytkownik podaje liczbę x. Należy
//wyświetlić tę liczbę. Jeżeli użytkownik poda 0, należy zakończyć program.