#include <stdio.h>

int main()
{
    char num[1024];
    while(1) {
        fgets(num, 1024, stdin);
        if(*num=='0') break;
        int sum=0;
        for(char *p=num; *p&&*p!='\n'; p++)
            sum+=*p-'0';
        printf("%d\n", sum);
    }
    return 0;
}