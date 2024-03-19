#include<stdio.h>

int main(void)
{
   int i,x,y;
   char s[100000];

   scanf("%s",s);

   x=0; y=0; 
   for(i=0;s[i]=='1'||s[i]=='0';i++){
      if(s[i]=='0'){
        x=x+1;
      }
      else if(s[i]=='1'){
        y=y+1;
      }
   }

   if(x>y) printf("%d\n",y*2);
   else    printf("%d\n",x*2);

   return 0;
}
