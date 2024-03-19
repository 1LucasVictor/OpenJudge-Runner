#include<stdio.h>
#include<ctype.h>
int main(void){
   char s[201];
   char a[201];
   char x[5];
   int m,h;
   int len;
   int i,j;

   sprintf(x,"-");
   scanf("%s",s);
   while(strcmp(s,x)){
      len=strlen(s);
      scanf("%d",&m);
      for(i=0;i<m;i++){
         scanf("%d",&h);
         for(j=0;j<h;j++){
            a[j]=s[j];
         }
         for(j=0;j<len-h;j++){
            s[j]=s[j+h];
         }
         for(j=0;j<h;j++){
            s[len-h+j]=a[j];
         }
      }
      printf("%s\n",s);
      scanf("%s",s);
   }
}