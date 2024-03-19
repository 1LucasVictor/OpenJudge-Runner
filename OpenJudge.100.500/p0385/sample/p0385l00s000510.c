#include <stdio.h>
int main(void){
    // Your code here!
    char NUM[10000]={0};
    int i, num, sum;
    
    while(1){
        sum=0;
        for(i=0; i<=10000; i++){
            scanf("%c", &NUM[i]);
            if (NUM[i]=='\n') break;
            if (NUM[0]=='0') return 0;
            num = NUM[i]-'0';
            sum += num;
            //printf("num=%d, sum=%d\n", num, sum);
        }
        printf("%d\n", sum);
    }
    
    
    
}

