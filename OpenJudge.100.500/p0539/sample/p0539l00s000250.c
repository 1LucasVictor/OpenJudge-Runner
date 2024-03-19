#include<stdio.h>
int main(void){
    int n,i,count=0;
    scanf("%d",&n);
    for(i=1;i<10;i++){
        if(n/i<10 && n%i==0)
            count = count + 1;
    }
    if(count == 0)
        printf("No");
    else
        printf("Yes");
    return 0;
}