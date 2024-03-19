#include<stdio.h>
int main(void)
{
    int a,b[21]={0},c[11]={0};
    int x=0,y=0,z=0;
    int i=0,j,k,l=0;

    for(;;){
        scanf("%d",&a);
        if(a>0){
            x++;
            for(j=11;j>0;j--){
                b[j]=b[j-1];
            }
            b[1]=a;
        }
        else if(a<=0){
            c[z]=b[1];
            for(k=1;k<11;k++){
                b[k-1]=b[k];
            }
            y++;
            z++;

        }
        if(x == y)break;
    }
    for(i=0;i<x;i++){
        printf("%d\n",c[i]);
    }
    return 0;
}