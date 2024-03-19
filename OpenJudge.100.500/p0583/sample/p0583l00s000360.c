#include <stdio.h>

int main(){
   int n,a,b,c,d;
   char s[200001];
    
   scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
   scanf("%s",&s[1]);
   if (d>c) {
      while (b!=d && s[b]!='#')
         if (s[b+1]=='.') b++;
         else             b+=2;
      if (s[b]=='#') {
         puts("No");
         return 0;
      }
      while (a!=c && s[a]!='#')
         if (s[a+1]=='.') a++;
         else             a+=2;
      if (s[a]=='#') puts("No");
      else           puts("Yes");
      return 0;
   }
   while (b!=d && s[b]!='#' && (s[b+1]!='.' || s[b-1]!='.')) 
       if (s[b+1]=='#') b+=2;
       else             b++;
   if ((b==d && s[b+1]=='#') || s[b]=='#') {
      puts("No");
      return 0;
   }
   s[b]='#';
   while (a!=c && s[a]!='#')
      if (s[a+1]=='.') a++;
      else             a+=2;
   if (s[a]=='#') {
      puts("No");
      return 0;
   }
   s[b]='.';
   while (b!=d && s[b]!='#')
      if (s[b+1]=='.') b++;
      else             b+=2;
   if (s[b]=='#') puts("No");
   else           puts("Yes");
   return 0;
}
