#include<stdio.h>
#include<string.h>
int main()
{
     char s[100],t[101];
     scanf("%s",&s);
      scanf("%s",&t);
     int l1=strlen(s),l2=strlen(t),c=0;
        for(int i=0;i<l1;i++){
             if(s[i]==t[i])
        c++;}

     if(c==l1)
          printf("Yes\n");
     else
          printf("No\n");
}
