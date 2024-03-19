#include <stdio.h>
#include <stdlib.h>   

int main()
{
int sum,i=0;
 char str[1000];
  while(1){
        scanf("%s",&str);
        if (str[0]=='0')break;
        for (sum=0,i=0;str[i]!='\0'; i++) {
            sum+=(str[i]-'0');
        }
        printf("%d\n",sum);
        }
 return 0;
}