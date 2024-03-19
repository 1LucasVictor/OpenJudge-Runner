#include <stdio.h>

int main(void){
    int a,b,c,i,sum=0;
    scanf("%d %d %d",&a,&b,&c);
    for(i=1;i<=c;i++){
        if(c%i==0&&(a%i==0||b%i==0))
            sum++;
    }
    printf("%d\n",sum);
    return 0;
}