#include <stdio.h>
int main(void){
    while(1){
        char x[1000]={'0'};
        int i, sum=0;
        
        scanf("%s", x);
        
        if(x[0]=='0') break;
        
        for(i=0; x[i]!='\0'; i++)
        sum += x[i] - '0';
        
        printf("%d\n", sum);
    }    
    return 0;
    
}
