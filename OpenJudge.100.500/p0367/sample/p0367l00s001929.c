#include<stdio.h>
int amp(int y,int z){
    y%=z;
    return y;
}
int main(void){
    int a,b,c,n=0;
    scanf("%d%d%d",&a,&b,&c);
    for(int x=a;x<=b;x++){
        if(amp(c,x)==0){
            n++;
        }
    }
    printf("%d\n",n);
    return 0;
}
