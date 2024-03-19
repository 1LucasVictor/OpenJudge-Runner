#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){ 
    int n,a,b;
    scanf("%d",&n);
    a = n/2;
    b = n/2 + 1;
    if (n % 2 == 0){
       printf("%d\n",a);
    }
    else{
        printf("%d\n",b);
    }
     
    
    return 0;
} 

