#include <stdio.h>
#include <stdlib.h>

int main(){
        int a,b,max=0;
        if(scanf("%d",&a)==1);
        if(scanf("%d",&b)==1);

        max=a+b;
        if(max < a*b)max=a*b;
        if(max < a-b)max=a-b;
        if(max < a/b)max=a/b;

        printf("%d\n",max);

}
