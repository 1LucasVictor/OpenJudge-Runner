#include<stdio.h>
int main(void){
    char num[1024];
    int sum;
    int i;
    while(1){
        sum=0;
        i=0;
        scanf("%s",num);
        if(num[0]=='0')
            break;
        while(num[i]!='\0'){
            sum+=num[i]-'0';
            i++;
        }
        printf("%d\n",sum);
    }
    return 0;
}
