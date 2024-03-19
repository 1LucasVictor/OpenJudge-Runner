#include <stdio.h>
int main (){
// DECLARAÇÃO
int N,M;

// INSTRUÇÕES
scanf ("%d %d",&N,&M);

if (N > 8 || M > 8)
    printf (":(");
else
    printf ("Yay!");
return 0;
}