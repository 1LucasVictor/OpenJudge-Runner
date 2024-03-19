#include<stdio.h>
int main(void){
    char num[1001];
    int sum,i;
    while(1){
        sum=0;
        scanf("%s",num);
        sum=0;
        if(num[0]=='0')break;
        for(i=0;num[i]!='\0';i++){
            sum+=num[i]-'0';
        }
        printf("%d\n",sum);
    }
    return 0;
}
