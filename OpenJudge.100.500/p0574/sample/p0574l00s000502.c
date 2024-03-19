#include<stdio.h>
int main()
{
   char s[10],Good,Bad;
   scanf("%s",s);
   if(s[0]==s[1]){
    printf("Bad");
   }
   else if(s[1]==s[2]){
   printf("Bad");
   }
   else if(s[2]==s[3]){
    printf("Bad");
   }
   else{
    printf("Good");
   }
}
