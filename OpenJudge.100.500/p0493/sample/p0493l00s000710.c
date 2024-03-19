#include<stdlib.h>
#include<stdio.h>

int returnHappiness(int x){
    int fivehundred=x/500;
    int happy1=500*fivehundred;
    x=x-happy1;
    int fives=x/5;
    int happy2=5*fives;
    happy1=happy1*2;
    return happy1+happy2;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",returnHappiness(n));
    return 0;
}