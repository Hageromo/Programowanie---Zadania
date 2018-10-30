#include <stdio.h>
#include<stdlib.h>

int main() {

    float x1;
    char op;
    float x2;
    int czyUzytChceJeszczeRaz = 1;

    do {
        printf("Wpisz operacje: ");
        scanf("%f %c %f", &x1, &op, &x2);
        scanf("%c");

        switch (op){
            case '+':
                printf("%.2f\n", x1 + x2);
                break;
            case '-':
                printf("%.2f\n", x1 - x2);
                break;
            case '*':
                printf("%.2f\n", x1 * x2);
                break;
            case '/':
                if (x2 == 0)
                    printf("Nie umiem dzielic przez zero");
                else
                    printf("%.2f\n", x1 / x2);
                break;
            default:
                printf("Niepoprawny zank operacji.\n");
        }

        printf("Czy chcesz jeszcze raz (y/n)?: ");
        char odp;
        scanf("%c", &odp);
        if (odp == 'y')
            czyUzytChceJeszczeRaz = 1;
        else
            czyUzytChceJeszczeRaz = 0;

    } while (czyUzytChceJeszczeRaz == 1);


    return EXIT_SUCCESS;
}
//2.2. Przerobić kalkulator z zadania 1.6. Teraz po każdym działaniu program powinien spytać użytkownika, czy ten chce powtórzyć
//wszystko od początku. Jeśli tak - restartujemy kalkulator i zaczynamy od nowa. Jeśli nie - kończymy program.