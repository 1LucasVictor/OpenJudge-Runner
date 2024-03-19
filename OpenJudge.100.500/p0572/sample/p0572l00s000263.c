#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int l,r,min=2019,tmp;
    scanf("%d %d",&l,&r);
    
    int i,j,c;
    for(i=l;i<=r;i++){
        for(j=i+1;j<=r;j++){
            tmp=(i % 2019) * (j % 2019);
            if(min > tmp){
                min = tmp;
            }
        }
    }
    printf("%d\n",min);
    

    return 0;
}