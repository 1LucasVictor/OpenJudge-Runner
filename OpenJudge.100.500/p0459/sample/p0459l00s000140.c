#include<stdio.h>
signed main(){
    int x,y,a,b,c,A,B;
    scanf("%d %d",&x,&y);
    a=0;
    b=0;
    c=0;
    while(a<=x){
        b=x-a;
        A=a*2;
        B=b*4;
        if(A+B==y){
            c++;
        }
        a++;
    }
    if(c!=0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return(0);
}