#include<stdio.h>
#include<string.h>
int main()
{
   char a[100];
   while(scanf("%s",&a)!=EOF){
   char s[4]="ABC";
     if(strcmp(s,a)==0) printf("ARC\n");
     else printf("ABC\n");}
   return 0;

}
