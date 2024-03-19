#include<stdio.h>
signed main(){
    int x,y,a,b=0,c=0,A,B;
    scanf("%d %d",&x,&y);
    for(a=0;a<=x;a++){
        b=x-a;
        A=a*4;
        B=b*2;
        if(A+B==y){
            c++;
        }
    }
    if(c!=0){
        printf("Yes\n");
    }else{
        printf("NO\n");
    }
    return(0);
}