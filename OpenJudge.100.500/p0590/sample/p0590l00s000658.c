#include <stdio.h>

int main()
{
    int a,b,c,d,e,k,s,i,f=0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    scanf("%d",&k);
    s=e-a;
    if(s>k){
        f=1;
    }
       s=e-b;
    if(s>k){
        f=1;
    }
       s=e-d;
    if(s>k){
        f=1;
    }
       s=e-c;
    if(s>k){
        f=1;
    }
       s=d-a;
    if(s>k){
        f=1;
    }
       s=d-c;
    if(s>k){
        f=1;
    }
           s=d-b;
    if(s>k){
        f=1;
    }
           s=c-b;
    if(s>k){
        f=1;
    }
           s=c-a;
    if(s>k){
        f=1;
    }
           s=b-a;
    if(s>k){
        f=1;
    }

    if(f==1){
        printf(":(");
    }
    else{
        printf("Yay!");
    }
        return 0;
}
