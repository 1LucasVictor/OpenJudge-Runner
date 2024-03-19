#include <stdio.h>


int main(void){

    char tmp =0;
    int num1,num2,answer =0;
    
    scanf("%d%d", &num1, &num2);
    
    while(answer == 0){
        if(num2==num1)
        {
            answer = num1;
        }
        else if (num2>num1)
        {
            num2=num2%num1;
            if(num2==0)
            {
                answer = num1;
            }
        }
        else
        {
            num1=num1%num2;
            if(num1==0)
            {
                answer = num2;
            }
        }
    }
    printf("%d\n",answer);
    
    return 0;
}

