#include <stdio.h>
int main(){
    int a,b,c,d,min=0,max=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>=c){
        min = a;
    }else{
        min = c;
    }
    if(b>=d){
        max=d;
    }else{
        max=b;
    }
    if(b<c || d<a){
        printf("0\n");
    }else{
        printf("%d\n",max-min);
    }
    return 0;
}