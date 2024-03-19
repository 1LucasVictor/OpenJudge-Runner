#include<stdio.h>
int main(void)
{
    int i,number=0;
    char x[1001]={};
    int sum;
    while(1){
        sum=0;
        scanf("%s", x);
        if(x[0]=='0') break;
        for(i=0; ;i++)
        {
            if(x[i]=='\0') break;
            number = x[i] - '0';
            sum+=number;
        }
        printf("%d\n", sum);
    }
    return 0;
}
