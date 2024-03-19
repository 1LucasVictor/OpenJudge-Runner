/*
AizuOnline A0013
Switching Railroad Cars
*/
#include <stdio.h>
int siding[100];


main()
{               int index=0;
                int ord;

while(EOF != scanf("%d",&ord))
	  if(ord > 0)
	  {      siding[index] = ord;
	         index ++;
	  }
	  else if(ord == 0)
	  {       index--;
	          printf("%d\n",siding[index]);
          }

	  return(0);

}