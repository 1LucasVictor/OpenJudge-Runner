#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int l,r,min=2019,tmp,min2=2019;
    scanf("%d %d",&l,&r);
    
    int i,j,c;
    for(i=l;i<=r;i++){
        tmp=(i % 2019);
        if(min > tmp){
            min = tmp;
        }  
          
    }
    if(min == 0){
        printf("0\n");
        return 0;
    }

    for(i=l;i<=r;i++){
        tmp=(i % 2019);
        if(min2 > tmp && tmp!=min){
            min2 = tmp;
        }  
          
    }

    
    printf("%d\n",min*min2 % 2019);
    

    return 0;
}