#include <stdio.h>

int main(){
    
char num[1001];

    while(1){
        int i=0,sum=0;

        scanf("%s", num);
        if(num[0]-'0'==0) break;
        
        while(num[i]){
        sum+=num[i]-'0';
        i++;
        }
    printf("%d\n",sum);
    }
    
    return(0);
}