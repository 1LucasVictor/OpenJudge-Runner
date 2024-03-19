#include <stdio.h>

 int main(void){
    char str[20],strr[20];
    int i,j;
    scanf("%s",str);
    for(i=0;i<20;i++){
      if(str[i]=='\0')
        break;
    }
    i--;
    for(;i>=0;i--){
    printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}
    