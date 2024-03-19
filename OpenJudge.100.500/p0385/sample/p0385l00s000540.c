#include<stdio.h>
int main(void){
    int sum,i;
    char N[1003]={'\0'};
    for(;;){
        scanf("%s",N);
        if(N[0]=='0'){
            break;
        }
        sum=0;
        i=0;
        while(N[i]!='\0'){
            sum+=N[i]-48;
            i++;
        }
        printf("%d\n",sum);
    }
    return 0;
}
