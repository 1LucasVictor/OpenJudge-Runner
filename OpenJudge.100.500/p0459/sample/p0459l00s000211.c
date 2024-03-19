#include<stdio.h>
signed main(){
    int X,Y;
    scanf("%d %d",&X,&Y);
    if(X*2<=Y&&Y<=X*4&&Y%2==0){
        printf("Yes");
    }
    else{
    printf("No");
    }
    return(0);
}