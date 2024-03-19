#include<stdio.h>
int main(){
    int a,b,c,x;
    scanf("%d %d %d",&a,&b,&c);
    if(a-b-c>=0){
        x=0;
    }
    else{
        x=b+c-a;
    }
    printf("%d\n",x);
    return 0;
}
