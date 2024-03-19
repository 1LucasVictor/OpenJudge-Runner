#include<stdio.h>
int main(){
    int a,b,su=0,sb=0,mu=1;
scanf("%d %d ",&a,&b);
    if(a>=-1000 && b<=1000){

        su=a+b;
        sb=a-b;
        mu=a*b;
    }
    if(su>mu && mu>sb){
     printf("%d\n",su);
    }
    if(mu>sb && sb>su){
     printf("%d\n",mu);
    }
    if(sb>mu && mu>su){
     printf("%d\n",sb);
    }
    if(su>sb && sb>mu){
     printf("%d\n",su);
    }
    if(mu>su && su>sb){
     printf("%d\n",mu);
    }
    if(sb>su && su>mu){
     printf("%d\n",sb);
    }
    return 0;
}

