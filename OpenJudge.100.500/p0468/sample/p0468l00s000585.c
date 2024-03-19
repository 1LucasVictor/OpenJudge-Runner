#include<stdio.h>
#include<string.h>
int main()
{
     char s[4];
     scanf("%s",&s);
     int c=0;
     for(int i=0;i<3;i++){
     if(s[i+1]=='B')
          c=1;
}
if(c==1)
     printf("ARC\n");
     else
          printf("ABC\n");

     return 0;
}
