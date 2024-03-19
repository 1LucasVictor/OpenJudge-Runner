#include <stdio.h>

void main () {
    
   int A, H, n;
    scanf("%d %d", &H, &A);
    
    n=H/A;
    
    if(H%A==0)
     printf("%d", n);
    else
     {n++;
    
   printf("%d", n);}
}