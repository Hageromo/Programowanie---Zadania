#include <stdio.h>
#include <stdlib.h>
int main() {

    int x;
    printf("Podaj liczbe");
    scanf("%d", &x);

    while (x > 0)
    {
        x = x - 1;
        if (x == 40)
        {
            break;
        }
        else if (x % 2 == 0)
        {
            printf("%d\n", x);
        }
        else continue;
    }
    return 0;
}

//2.5. Zapoznać się z instrukcjami continue; i break;. Pierwsza służy do zakończenia iteracji i przejścia do następnej, a druga natychmiast
//kończy pętlę. Przerobić program z zadania 1.4 (2.4 - w 1.4 nie ma petli), aby wyświetlał tylko parzyste liczby (użyć if oraz continue). Jeśli liczba wynosi 40, należy
//wyjść z pętli i zakończyć program.