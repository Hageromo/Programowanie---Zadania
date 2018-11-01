#include <stdio.h>

    void WriteBiggerNumber(int x, int y){
    if (x > y){
        printf("%d", x);
    }
    else if (y>x){
        printf("%d", y);
    }
    else {
        printf("Sa rowne");
    }

}

int main() {

    int x;
    int y;
    printf("Wpisz dwie liczby oddzielone spacja");
    scanf("%d %d", &x, &y);
    WriteBiggerNumber(x, y);

    return 0;
}
//3.3. Napisać metodę void WriteBiggerNumber(int x, int y). Metoda powinna pobrać 2 parametry i zwrócić większy z nich. Wykorzystać
//funckję w metodzie main(). UWAGA - pobieranie liczb od użytkownika powinno odbyć się w funkcji main(), a NIE w WriteBiggerNumber! Do
//funkcji należy jedynie przesłać pobrane wcześniej parametry.