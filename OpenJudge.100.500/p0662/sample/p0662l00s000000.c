#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d", &a,&b,&c,&d);
    int tempo = 0;
   if ((b > d) && (a < c))
    tempo = d - c;

    if ((b > c) && (b < d))
        tempo = b - c;

    if((a > c) && (b < c))
        tempo = d - b;
    if ((a > c) && (b < d))
        tempo = b - a;
    printf("%d\n", tempo);


    return 0;
}
