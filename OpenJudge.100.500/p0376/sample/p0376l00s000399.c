#include <stdio.h>
int main(void){
    // Your code here!
   int i, n; 
   int a[100]; 
   scanf("%d", &n); 
   for(i=0;i<n;i++){ 
       scanf(" %d", &a[i]); 
    } 
    for(i=0;i<n;i++){ 
        if(i)printf(" "); 
        printf("%d", a[n-i-1]); 
    } 
    printf("\n"); 
    return 0; 
} 

