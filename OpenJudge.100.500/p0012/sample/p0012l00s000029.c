#include<stdio.h>
int main(void)
{
    int a[21]={0},b[21]={0},c[11]={0};
    int x=0,y=0,z=0;
    int i=0,j,k,l=0;

    for(;;){
        while(scanf("%d",&a[i])!=EOF){
        if(a[i]>0){
            x++;
            for(j=11;j>0;j--){
                b[j]=b[j-1];
            }
            b[1]=a[i];
            i++;
        }
        else if(a[i]<=0){
            c[z]=b[1];
            for(k=1;k<11;k++){
                b[k-1]=b[k];
            }
            y++;
            z++;

        }
        if(x == y){

    z=0;
    for(l=0;l<x;l++){
        printf("%d\n",c[l]);
        a[l]=0;
        b[l]=0;
        c[l]=0;
    }
    x=0;
    y=0;
    }
        }
        break;

    }
    return 0;
}