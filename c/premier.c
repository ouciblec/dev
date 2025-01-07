#include <stdio.h>
 
int premierEntre3(int a, int b, int c){
    if(a*a + b*b == c*c) {
        printf("(%d, %d, %d) sont premiers entre eux.\n", a, b, c);
        return 1;
    }
    return 0;
}

int main(){
    int max = 100;
    for(int a=1; a<=max; a++){
        for(int b=a; b<=max; b++){
            for(int c=b; c<=max; c++){
                premierEntre3(a, b, c);
            }
        }
    }
    return 0;
}