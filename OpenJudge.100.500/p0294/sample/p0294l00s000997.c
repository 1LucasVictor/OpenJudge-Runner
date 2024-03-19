#include<stdio.h>
struct card
{
  char num[2];
  char mark;
  int value;
};
int n;
char isStable(struct card in[], struct card out[])
{
  int i, j, a, b;
  for(i = 0; i < n; i++)
    {
      for(j = i+1; j < n; j++)
	{
	  for(a = 0; a < n; a++)
	    {
	      for(b = a+1; b < n; b++)
		{
		  if(in[i].value == in[j].value && in[i].mark == out[b].mark && in[j].mark == out[a].mark)
		    {
		      return 0;
		    }
		}
	    }
	}
    }
  return 1;
}
  int main()
  {
    int i, j, minj, k;
    struct card c[36], a[36], b[36], tmp;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
      {
	scanf("%s", a[i].num);
	if(a[i].num[0] == 'H')
	  {
	    a[i].mark = 'H';
	  }
	else if(a[i].num[0] == 'S')
	      {
		a[i].mark = 'S';
	      }
	else if(a[i].num[0] == 'C')
	  {
	    a[i].mark = 'C';
	  }
	else
	  {
	    a[i].mark = 'D';
	  }
	if(a[i].num[1] == '1')
	  {
	    a[i].value = 1;
	  }
	else if(a[i].num[1] == '2')
	  {
	    a[i].value = 2;
	  }
	else if(a[i].num[1] == '3')
	  {
	    a[i].value = 3;
	  }
	else if(a[i].num[1] == '4')
	  {
	    a[i].value = 4;
	  }
	else if(a[i].num[1] == '5')
	  {
	    a[i].value = 5;
	  }
	else if(a[i].num[1] == '6')
	  {
	    a[i].value = 6;
	  }
	else if(a[i].num[1] == '7')
	  {
	    a[i].value = 7;
	  }
	else if(a[i].num[1] == '8')
	  {
	    a[i].value = 8;
	  }
	else
	  {
	    a[i].value = 9;
	  }
	b[i] = a[i];
	c[i] = a[i];
      }
    for(i = 0; i <= n-1; i++)
      {
	for(j = n - 1; j >= i + 1; j--)
	  {
	    if(c[j].value < c[j-1].value)
	      {
		tmp = c[j];
		c[j] = c[j-1];
		c[j-1] = tmp;
	      }
	  }
      }
    for(i = 0; i < n - 1; i++)
      {
	printf("%c%d ", c[i].mark, c[i].value);
      }
    printf("%c%d\n", c[n-1].mark, c[n-1].value);
    if(isStable(a, c) == 1)
      {
	printf("Stable\n");
      }
    else
      {
	printf("Not stable\n");
      }

    
    for(i = 0; i <= n-1; i++)
      {
	minj = i;
	for(j = i; j <= n-1; j++)
	  {
	    if(b[j].value < b[minj].value)
	      {
		minj = j;
	      }
	  }
	tmp = b[i];
	b[i] = b[minj];
	b[minj] = tmp;
      }
    for(i = 0; i < n - 1; i++)
      {
	printf("%c%d ", b[i].mark, b[i].value);
      }
    printf("%c%d\n", b[n-1].mark, b[n-1].value);
    if(isStable(a, b) == 1)
      {
	printf("Stable\n");
      }
    else
      {
	printf("Not stable\n");
      }
    
    return 0;
  }

