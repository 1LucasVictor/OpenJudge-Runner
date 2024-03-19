#include<stdio.h>

int main(void)
{
  int i,j,count=1;
  char n[10000];
  long int b[10000];


  for(i=0;;i++)
    {
      b[count]=0;
      scanf("%c",&n[i]);
      if(n[i]=='0')
	break;
      else
	while(n[i]!='\n')
	  {   
	    b[count]=b[count]+(n[i]-'0');
	    i++;
	    scanf("%c",&n[i]);
	  }
      count++;
    }
  
  for(j=1;j<count;j++)
    printf("%ld\n",b[j]);
}

