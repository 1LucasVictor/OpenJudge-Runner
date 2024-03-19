#include  <stdio.h>

int main(){
    char a,b,c;
    scanf ("%c %c %c", &a,&b,&c);
    if (a==c&&a!=b){
    printf ("Yes\n");
    }
    else if (a==b&&a!=c){
    printf ("Yes\n");
    }
    else if (a==b&&a==c){
    printf ("No\n");
    }
    return 0;
}