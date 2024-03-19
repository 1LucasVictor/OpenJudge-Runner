#include<stdio.h>
#include<string.h>
#include<stdlib.h>
  
int main(void)
{
    char num[1001] = {0} ;
    int i=0 ;
    int number=0 ;

  
    while (1){
  
        scanf("%s",num);
  
        if (num[0]=='0' && num[1]=='\0') break;
  
        for (i=0 ;i<1001 ;i++){
  
            if (num[i]=='\0') break;
  
            number=number+(num[i]-'0');
  
        }
  
        printf("%d\n",number);
        memset(num ,'\0' ,sizeof num);
        number=0;
  
    }
  
    return 0;
}
