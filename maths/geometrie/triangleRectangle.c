#include <stdio.h>
 
int estTriangleRectangle(int a, int b, int c){
    if(a*a + b*b == c*c) {
        printf("Le triangle a = %d, b = %d, c = %d, est rectangle.\n", a, b, c);
        return 1;
    }
    else{
        printf("Le triangle a = %d, b = %d, c = %d, n'est pas rectangle.\n", a, b, c);   
        return 0;
    }
}

int main(){
    estTriangleRectangle(3, 4, 5); //Cas positif
    estTriangleRectangle(3, 4, 6); //Cas négatif

    return 0;
}