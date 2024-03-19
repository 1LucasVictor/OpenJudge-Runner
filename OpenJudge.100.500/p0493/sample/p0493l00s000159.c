#include<stdio.h>
int main ()
{
    int X,A,E,S,a;
    scanf ("%d",&X);
        a=X%500;
        A=X/500;
        E=a/5;
        S=(A*500*2)+(E*5);
        printf ("%d\n",S);

     return 0;
}
