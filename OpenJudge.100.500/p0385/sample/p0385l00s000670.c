
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int sum , i;
    char x[1000];
    
    while(1){
        scanf("%s",x);
        if (x[0] == '0') break;
        for (sum=0,i=0; x[i]!='\0'; i++) {
            sum += (x[i]-'0');
        }
        printf("%d\n",sum);
    }
}