#include<stdio.h>
int main()
{
unsigned long long int a,b,c;
  scanf("%d %d",&a,&b);
unsigned  long long int d=a%b;
if (b%2==1)
   {
      if(d<=(b-1)/2)
      {
      printf("%d",d);
      }
     else {c=b-d;
            printf("%d",c);
            }
    }
  
else
   {
      if(d<b/2) 
       {c=d;
        printf("%d",c);
        }
      else {c=b-d;
            printf("%d",c);
            }
    }
return 0;
}
