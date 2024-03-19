#include<stdio.h>
int main(){
    int n;
    int sum=0,cnt=0;
    scanf("%d",&n);
    while(n>0){
        sum = sum + n % 10;
     n = n/10;
     if(sum==7){
        cnt++;
     }

    }

    if(cnt==0)printf("No\n");
    else printf("Yes\n");



    return 0;

}
