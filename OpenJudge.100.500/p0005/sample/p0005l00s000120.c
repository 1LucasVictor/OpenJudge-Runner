#include <stdio.h>
#include<string.h>
int main(void){
  
  int i,j,n;
  i=0;
  j=0;
  char a[20],b[20];
  

      scanf("%s",a);

      n = strlen(a);

  for(i=n-1;i>=0;i--)
    {
      b[n-1-i]=a[i];
    }
  b[n]='\0';

  printf("%s\n",b);
  return 0;
}