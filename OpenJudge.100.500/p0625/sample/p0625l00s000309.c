#include<stdio.h>
int main()
{
    int i,h,l,e,j,n,k;
    scanf("%d%d",&h,&n);
    if(h<n){
       l=h;
       e=n;
    }
    else{
        l=n;
        e=h;
    }
    k=h+n;
    j=16-(l+e);
    i=j+l;
    if(h>8||n>8){
        printf(":{\n");
    }
    else { printf("Yay!\n");}

    return 0;
}
