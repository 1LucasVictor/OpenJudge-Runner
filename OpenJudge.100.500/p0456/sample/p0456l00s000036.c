#include <stdio.h>
int main()
{
	int i=0,j,n=0;
    char a[100],b[100];
	while(1)
	  {a[i]=getchar();
      if(a[i]!='\n') 
        i++;
      else
        break;}
      
      
      for(j=0;j<i;j++)
      {scanf("%c",&b[j]);
             if(a[j]!=b[j])
                 n++;}
      printf("%d",n);
      return 0;
 }