#include<stdio.h>
#include<string.h>
int main()
{
     int i,j,la,lb,c=0;
     char s[105],t[105];
     scanf("%s%s",&s,&t);
     la=strlen(s);
     lb=strlen(t);
     for(i=0,j=0;i<la,j<lb;i++,j++){
          if(s[i]!=t[j])
          c++;
     }
      printf("%d\n",c);
     return 0;
}
