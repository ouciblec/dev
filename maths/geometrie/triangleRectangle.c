#include <stdio.h>

char* triangleRectangle(int a, int b, int c){
    if(a*a + b*b == c*c) return "C'est un triangle rectangle.\n";
    else return "Ce n'est PAS un triangle rectangle.\n";
}

int main(){
    char* phrase = triangleRectangle(3, 4, 6);
    printf("%s", phrase);
    return 0;
}