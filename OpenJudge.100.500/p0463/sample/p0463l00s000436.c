#include<stdio.h>
int main(){
    int n,t;
    scanf("%d",&n);
    t=n%10;
    if(t==2||t==4||t==5||t==7||t==9) printf("hon");
    if(t==0||t==1||t==6||t==8) printf("pon");
     if(t==3) printf("bon");
     return 0;
}