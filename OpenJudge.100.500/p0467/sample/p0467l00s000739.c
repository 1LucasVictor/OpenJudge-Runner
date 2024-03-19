#include<stdio.h>
int main(){
    int remain,a,b,c,k,num=0;
    
    scanf("%d %d %d %d",&a,&b,&c,&k);
    remain=k;
    if(remain>a){
        num+=a;
        remain-=a;
        if(remain>b){
              remain-=b;
              num=num-remain;
              printf("%d",num);

        }
        else { printf("%d",num);}
    }
    else{
        num+=a;
        printf("%d",num);
    }
    return 0;
}