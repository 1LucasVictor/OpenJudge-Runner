#include<stdio.h>
int main(void){
    int y,s,n=0,i[100000],num,tmp;
    while(1){
        scanf("%d",&num);
        if(num == 0) break;
        y = (num/1000);
        tmp = num%1000;
        y += tmp/100;
        tmp = num % 100;
        y += tmp/10;
        tmp = num % 10;
        y += tmp;
        i[n] = y;
        n++;
    }
    for(s=0;s<n;s++) printf("%d\n",i[s]);
    return 0;
}