#include <stdio.h>
int main(void){
    int a,b;
    while(scanf("%d %d",&a,&b) != EOF){
        int sum,cnt=1;
        sum=a+b;
        while(sum>=10){
            sum=sum/10;
            cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}

