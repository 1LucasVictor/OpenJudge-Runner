#include<stdio.h>
int main(){
    int a,b,c,x=0,i;
    scanf("%d %d %d",&a,&b,&c);
    for(i=a;i<=b;i++){
        if(c%i==0){
            x++;
        }
    }
    printf("%d\n",x);
    return 0;
}
