#include <stdio.h>

int main()
{
    int i, n, a, x, min, max, sum;
    
    scanf("%d",&n);

    scanf(" %d",&a);
    min = max = sum = a;
   

    for(i = 1; i < n; i++){
    scanf(" %d",&x);
    
    if(x >= max){  
    max = x;
    }
    if(x <= min){  
    min = x;
    }
    sum = x + sum;
    }
     
    printf("%d %d %d\n", min, max, sum);

    return 0;
}