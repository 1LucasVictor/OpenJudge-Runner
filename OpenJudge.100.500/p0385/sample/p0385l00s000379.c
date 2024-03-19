#include <stdio.h>
int main(void){
  
    int sum , i;
    char k[1000];
      
    while(1){
        scanf("%s",k);
        if (k[0]=='0')break;
        for (sum=0,i=0; k[i]!='\0'; i++) {
            sum+=(k[i]-'0');
        }
        printf("%d\n",sum);
        }
  
    return 0;
}