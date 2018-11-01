#include <stdio.h>
    void newLines(int x){
    int i;
    for(i = 0; i < x; i++){
        printf("\n");
    }
}

int main() {

    newLines(7);

    return 0;
}
//3.2. Napisać metodę void NewLines(int count). Powinna ona wypisać tyle nowych linii, ile zostało podanych W PARAMETRZE count (należy
//użyć pętli for). Użyć metodę w main()