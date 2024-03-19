#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int l,r,min=2019,tmp,min2=2019,cnt=0;
    scanf("%d %d",&l,&r);
    if(r-l > 2019){
        r=l+2019;
    }    
    int i,j,c;
    for(i=l;i<=r;i++){
        tmp=(i%2019)  *((i+1) % 2019); 
        if(min > tmp){
            min = tmp;
        }  
    }
    

    
    printf("%d\n",min);
    

    return 0;
}