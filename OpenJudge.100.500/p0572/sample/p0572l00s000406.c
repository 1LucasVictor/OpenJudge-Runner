#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    long l,r,c,min=2019,tmp;
    long i,j;

    scanf("%ld %ld",&l,&r);
    c=r-l;
    if(c>=2019){
        printf("0\n");
        return 0;
    }   
    
    for(i=l;i<=r;i++){
        tmp = ((i % 2019) * ((i+1) % 2019)) % 2019;
        if(min > tmp){
            min = tmp;
        }
    }
    
    printf("%ld\n",min);
    

    return 0;
}