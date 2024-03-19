#include<stdio.h>
int main(){

    int a,b,plus,minus;
    scanf("%d%d",&a,&b);
    plus=a+b;
    minus=b-a;
    if(b%a==0){
        printf("%d\n",plus);
    }
    else{
        printf("%d\n",minus);
    }


return 0;



}
