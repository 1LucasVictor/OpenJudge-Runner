#include<stdio.h>

int keta(int);

int main(){
    int a,b;//aとbの入力用
    
    while(scanf("%d %d",&a,&b)!=EOF){
        printf("%d\n",keta(a+b));
    }
    
    return 0;
}

int keta(int n){
    if(n<10){
        return 1;
    }else{
        return keta(n/10)+1;
    }
}