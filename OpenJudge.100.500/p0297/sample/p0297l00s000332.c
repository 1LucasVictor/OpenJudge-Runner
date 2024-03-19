#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  int i, n, q, *queue, head, tail, execution, time;
  char (*name)[10];

  head = 0;
  tail = 0;
  time = 0;

  scanf("%d%d", &n, &q);

  queue = (int *)malloc( (n+1) * sizeof(int));
  name = (char (*)[10])malloc( (n+1) * 10 * sizeof(char));

  for( i=0; i<n; i++ )
    {
      scanf("%s%d", name[i], &queue[i]);
      tail++;
    }

  while(1)
    {

      if( tail == head ) break;

      execution = queue[head];

      if( execution - q > 0 )
	{
	  queue[tail] = execution - q;
	  strcpy(name[tail], name[head]);
	  time += q;
	  tail = ( tail + 1 ) % ( n + 1 );
	}

      else if( execution - q <= 0 )
	{
	  time += execution;
	  printf("%s %d\n", name[head], time);
	}

      head = (head+1) % (n+1);
    }

  free( queue );
  free( name );

  return 0;
}

