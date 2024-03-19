#include<stdio.h>
int main(){
    int X;
    scanf("%d",&X);
    int ans = (X/500)*1000+((X%500)/5)*5;
    printf("%d",ans);
}
