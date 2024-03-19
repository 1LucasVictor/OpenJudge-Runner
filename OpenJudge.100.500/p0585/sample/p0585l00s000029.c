#include<stdio.h>
int main(){
    int a,b,t;
    int total=0;
    int i=1;
    scanf("%d %d %d",&a,&b,&t);
    while(a*i<=t+0.5){
        total+=b;
        i++;
    }
    printf("%d\n",total);

    return 0;
}