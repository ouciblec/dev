int main(){
    char* phrase = triangleRectangle(3, 4, 5);
    printf("%s", phrase);
    return 0;
}

char* triangleRectangle(int a, int b, int c){
    if(a*a + b*b == c*c) return "C'est un triangle rectangle.";
    else return "Ce n'est PAS un triangle rectangle.";
}
