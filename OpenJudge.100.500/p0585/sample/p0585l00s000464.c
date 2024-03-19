#include<stdio.h>
int main(){
    int a,b,t;
    int total=0;
    int i=1;
    scanf("%d %d %d",&a,&b,&t);
    while(a<=t+0.5){
        total+=b;
        i++;
        a=a*i;
    }
    printf("%d\n",total);

    return 0;
}