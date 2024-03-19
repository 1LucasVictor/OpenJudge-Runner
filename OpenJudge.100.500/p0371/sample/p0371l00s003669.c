#include<stdio.h>
int main(void){
    int n,a,b,c,i;
    long d=0;
    b=-1000000;
    c=1000000;
    scanf("%d",&n);
    for(a=0;a<n;a++){
        scanf("%d",&i);
        if(b<i){
            b=i;
        }
        if(c>i){
            c=i;
        }
        d+=i;
    }
    printf("%d %d %ld\n",c,b,d);
             
return 0;
 
}