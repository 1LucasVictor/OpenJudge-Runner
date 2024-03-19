#include<stdio.h>
#include<string.h>
#define NUM 3

int main(){
   char s[NUM];
   int i;
   for(i=0;i<NUM;i++){
      scanf("%c",&s[i]);
   }
   if(s[0]!=s[1]||s[1]!=s[2]){
      printf("Yes");
   }else{
      printf("No");
   }
   return 0;
}
   