#include<stdio.h>
int main(){
    int a,b,flag=0;
    int x,y;
    scanf("%d %d",&x,&y);
    for(a=0;a<=50;a++){
        for(b=0;b<=20;b++){
            if(a+b==x && 2*a+4*b==y){
                printf("Yes");
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        printf("No");
    }
    
    return 0;
}