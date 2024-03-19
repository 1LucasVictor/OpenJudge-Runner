#include <stdio.h>
int main(void){
    // Your code here!
    int i,sum;
    char number[1001];
    
    while(1){
        scanf("%s",&number);
        if(number[0]=='0') break;
        sum=0;
        for(i=0;number[i]!='\0';i++){
            sum+=number[i]-'0';
        }
        printf("%d\n",sum);
    }
    return 0;
}

