/*
AIZU ONLINE 0002

Digit Number
*/

#include <stdio.h>
#include <string.h>

main()
{
  int a,b;
  char buf[10];

  while(EOF != scanf("%d %d",&a,&b))
    {
      sprintf(buf,"%d\0",a+b);
      printf("%d\n",strlen(buf));
    }

  return(0);
}