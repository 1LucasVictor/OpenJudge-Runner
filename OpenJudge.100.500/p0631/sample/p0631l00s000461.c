#include <stdio.h>
int main (){

// DECLARAÇÃO
int A,B,X; 

// INSTRUÇÕES
scanf ("%d %d %d",&A,&B,&X);

if (A > X)
    printf ("NO\n");
else if (A+B < X)
    printf ("NO\n");
else
    printf ("YES\n");

return 0;
}