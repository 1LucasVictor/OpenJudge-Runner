#include <stdio.h>
int main(void){
    char number[1001];
    int i,num,sum=0;
    
    while(1) {
        scanf("%s",number);
        for(i=0;number[i]!='\0';i++){
            num=number[i]-'0';
            sum=sum+num;
        }
        if(sum==0) break;
        printf("%d\n",sum);
        sum=0;
        }
    
    return 0;
}
