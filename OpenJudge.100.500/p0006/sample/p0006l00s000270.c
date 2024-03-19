#include<stdio.h>

int main()
{

  int debt = 100000;
  int n;

  scanf("%d",&n);

  while(n!=0)
  {
    n--;
    int sen;
    debt +=debt/20;
    sen = debt%1000;
    if(sen !=0)debt+=1000-sen;

  }

  printf("%d\n",debt);
}