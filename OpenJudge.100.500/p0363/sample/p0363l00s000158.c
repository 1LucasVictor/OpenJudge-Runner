#include <stdio.h>

int main(void)
{
    int a[3],tmp,i;

    scanf("%d %d %d",&a[0],&a[1],&a[2]);

    i=0;

    while(i<2){
        tmp=a[i+1]-a[i];

        if(tmp<0){
            tmp=a[i];
            a[i]=a[i+1];
            a[i+1]=tmp;

            if(i>0) i--;
        }else{
            i++;
        }
    }

    printf("%d %d %d\n",a[0],a[1],a[2]);

    return 0;
}