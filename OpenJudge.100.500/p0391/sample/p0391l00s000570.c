// ITP1-ITP1_9_D:	Transformation
// 2018.3.8

#include <stdio.h>

void print (char *str, int a, int b)
{
  int i;
  for (i = a; i <= b; i++)
    {
      putchar(str[i]);
    }
  putchar('\n');
};

void reverse (char *str, int a, int b)
{
  char temp[1000] = {0};
  int i;
  for (i = a; i <= b; i++)
    {
      temp[i] = str[i];
    }
  for (i = b; i >= a; i--)
    {
      str[a + b - i] = temp[i];
    }
};

void replace (char *str, int a, int b, char *p)
{
  int i;
  for (i = a; i <= b; i++)
    {
      str[i] = p[i - a];
    }
};


int main (void)
{
  char str[1000] = {0};
  char instruction[10] = {0};
  int q;
  int c;
  int i;
  
  scanf("%s\n", str);
  scanf("%d\n", &q);
  
  while(q--)
    {
      i = 0;
      while((c = getchar()) != ' ')
	{
	  instruction[i] = c;
	  i++;
	}
      
      switch(instruction[2])
	{
	case 'i':
	  {
	    int a, b;
	    scanf("%d %d\n", &a , &b);
	    print(str, a, b);
	    break;
	  }
	case 'v':
	  {
	    int a, b;
	    scanf("%d %d\n", &a , &b);
	    reverse(str, a, b);
	    break;
	  }
	case 'p':
	  {
	    int a, b;
	    char p[1000] = {0};
	    scanf("%d %d %s\n", &a , &b, p);
	    replace(str, a, b, p);
	    break;
	  }
	}
    }
  return 0;
}

