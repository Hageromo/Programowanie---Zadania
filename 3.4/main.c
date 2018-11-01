#include <stdio.h>

    int Multiply(int x, int y){
    return x * y;
}

int main() {

    int x;
    int y;
    printf("Wpis dwie liczby oddzielone spacja:");
    scanf("%d %d", &x, &y);
    printf("%d * %d = %d\n", x, y, Multiply(x, y));


    return 0;
}
//3.4. Napisać metodę Multiply(int x, int y) . Metoda powinna ZWRÓCIĆ (słowo kluczowe return) iloczyn dwóch parametrów. Uwaga! Metoda
//NIE POWINNA wypisywać wyniku - powinien on być wyświetlony w funkcji main!