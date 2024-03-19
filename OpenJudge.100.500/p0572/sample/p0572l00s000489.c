#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int min=2019,tmp,min2=2019,cnt=0;
    long l,r,c;
    scanf("%ld %ld",&l,&r);
    c=r-l;
    if(c>=2019){
        printf("0\n");
        return 0;
    }    
    int i,j;
    for(i=l;i<=l+c;i++){
        tmp=(i%2019)  *((i+1) % 2019); 
        if(min > tmp){
            min = tmp;
        }  
    }
    

    
    printf("%d\n",min);
    

    return 0;
}