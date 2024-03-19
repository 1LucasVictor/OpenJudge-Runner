#include <stdio.h>

int main(void){
    int i,a,b,result;
    char com;
    while(1){
        scanf("%d %c %d",&a,&com,&b);
        if(com == '+')result = a + b;
        else if(com == '-')result= a - b;
        else if(com == '/')result= a / b;
        else if(com == '*')result= a * b;
        else if(com == '?')break;
        else {
            printf("error value : %c\n",com);
            break;
        }
        printf("%d\n",result);
    }
    return 0;
}
