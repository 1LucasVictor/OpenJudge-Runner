#include<stdio.h>
#include<string.h>
int main()
{
 char S[30];
char T[30];
scanf("%s",S);
scanf("%s",T);
int i,j=0,count=0,m=strlen(S);
for(i=0;i<m;i++)
{
   if(S[i]!=T[j])
   {
     
     count++;
  	j++;
   }
  else
  {
    j++;
  }

}
  printf("%d",count);
}
