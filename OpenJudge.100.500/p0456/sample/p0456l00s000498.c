#include<stdio.h>
int main()
{ char S[100000],T[100000];
 int i=0;
 int count = 0;
 scanf("%s%s",S,T);
 for(i=0;i<strlen(S);i++)
 {
   if(S[i]!=T[i])
   { 
     S[i]=T[i];
     count = count+1;
   }
 }
 printf("%d",count);
 return 0;
}
    
 
