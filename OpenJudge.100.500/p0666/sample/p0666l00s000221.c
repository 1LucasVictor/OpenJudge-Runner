#include<stdio.h>
#include<string.h>
int main(void){
    int A,B,C,D,E,x,y,cou=0,v[3];
    char S[3],s[3],X,Y;
    scanf("%d %d %d",&A,&B,&C);
    if(-B+C<=A){
        printf("safe");
    }else if(-B+C>=0){
        printf("delicious");
    }else{
        printf("dangerous");
    }
    return 0;
}