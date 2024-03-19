#include<stdio.h>
#include<math.h>
#include<string.h>
#define T 100000

int main(){
   char name[3];
   scanf("%s",name);

    char ans[3] = "ABC";

   if(strcmp(name,ans)){
        printf("ARC");
   }else{printf("ABC");}


return 0;

}