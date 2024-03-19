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
    l = l % 2019;
    r = r % 2019;
    min = (l * (l+1)) % 2019;
    
    printf("%ld\n",min);
    

    return 0;
}