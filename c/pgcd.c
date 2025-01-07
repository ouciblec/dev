#include <stdio.h>


int pgcd(int a, int b){
    if(b<a){
        int tmp = a;
        a = b;
        b = tmp;
    }

    int pgcd = 1;
    for(int i=2; i<=a; i++){//est-il plus avantageux de commencer par a puis décrémenter ? intuition : non
        if(a%i == 0 && b%i == 0) pgcd = i;
    }
    
    printf("PGCD(%d, %d) = %d\n", a, b, pgcd);
    return pgcd;
}

int pgcd3(int a, int b, int c){
    int tab[] = [a, b, c];
    trier(tab, 3);

    int pgcd = 1;
    for(int i=2; i<=a; i++){
        if(a%i == 0 && b%i == 0 && c%i == 0) pgcd = i;
    }
    
    printf("PGCD(%d, %d, %d) = %d\n", a, b, c, pgcd);
    return pgcd;
}




int main(){
    pgcd(20,30);
}
