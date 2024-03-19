#include<stdio.h>
#include<string.h>

int main(){
   char abc[]={'A','B','C'};
   char arc[]={'A','R','C'};
   char str[3];
   int i;
   scanf("%s",str);
   if(str[1]=='B'){
      printf("ARC");
   }else if(str[1]=='R'){
      printf("ABC");
   }
   
   return 0;
}
     