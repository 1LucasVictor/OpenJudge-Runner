#include <stdio.h>
#include<string.h>
int main(void){
   char chr[20];
   scanf("%s",chr);
   int l;
   l = strlen( chr );
   for(int i=l-1;i>=0;i--){
       printf("%c",chr[i]);
   }
    printf("\n");
    return 0;
}

