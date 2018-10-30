#include <stdio.h>
#include<stdlib.h>
int main() {

    float x1;
    char op;
    float x2;
/*    printf("Podaj pierwsza liczbe: ");
    scanf("%f",&x1);

    printf("")

    printf("Podaj druga liczbe: ");
    scanf("%f",&x2);*/

    printf("Wpisz operacje: ");
    scanf("%f %c %f", &x1, &op, &x2);

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

    return EXIT_SUCCESS;
}

//1.6. Napisać prosty kalkulator. Należy pobrać od użytkownika 2 liczby oraz operator (jeden z czterech: mnożenie, dzielenie, dodawanie,
//odejmowanie). Wymagane jest utworzenie prostego menu użytkownika. Uwaga - należy pamiętać o ułamkach (1/3 powinno dać 0.33, a nie
//0)