#include <stdio.h>

int main(void){
        int i,sum;
        char x[1001];
        while(1){
                sum=0;
                i=0;
                scanf("%s",x);
                if(x[0]=='0')
                        break;
                while(x[i]){
                        sum+=(x[i]-'0');
                        i++;
                }
                printf("%d\n",sum);
        }
        return 0;
}