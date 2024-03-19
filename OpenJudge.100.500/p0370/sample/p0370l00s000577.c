#include <stdio.h>


int main(void)
{
  int a,b,n,i;
  char op;

  for(i =1; ;i++)
    {

    
  scanf("%d %c %d",&a,&op,&b);

      if( op == '+' )
    {
      n = a + b;
      printf("%d\n",n);
    }
 else if( op == '-' )
   {
     n = a - b;
     printf("%d\n",n);
   }
 else if( op == '*' )
   {
     n = a * b;
     printf("%d\n",n);
   }
 else if( op == '/' )
   {
     n = a/ b;
     printf("%d\n",n);
   }
 else if( op == '?' )
   {
     break;
   }

    }


  return 0;

}

