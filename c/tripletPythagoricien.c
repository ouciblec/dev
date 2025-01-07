#include <stdio.h>
 
int tripletPythagoricien(int a, int b, int c){
    if(a*a + b*b == c*c) {
        printf("(%d, %d, %d) est un triplet pythagoricien.\n", a, b, c);
        return 1;
    }
    return 0;
}

//Un triplet pythagoricien est dit « primitif » si ses trois entiers sont premiers entre eux
int tripletPythagoricienPrimitif(int a, int b, int c){
    if(a*a + b*b == c*c && premierEntre3(a,b,c)) {
        printf("(%d, %d, %d) est un triplet pythagoricien primitif.\n", a, b, c);
        return 1;
    }
    return 0;
}

int main(){
    int max = 100;
    for(int a=1; a<=max; a++){
        for(int b=a; b<=max; b++){
            for(int c=b; c<=max; c++){
                tripletPythagoricien(a, b, c);
            }
        }
    }
    return 0;
}