#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    long l,r,c,min=2019,tmp;
    long i,j;

    scanf("%ld %ld",&l,&r);
    
    for(i=l;i<r;i++){
        tmp = (i* (i+1)) % 2019;
        if(min > tmp){
            min = tmp;
        }
        if(min == 0)
        {
            break;
        }
    }
    
    printf("%ld\n",min);
    

    return 0;
}