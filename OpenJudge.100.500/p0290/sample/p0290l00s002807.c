#include<stdio.h>
#include<math.h>
int prime(int);
int main() 
{
  int all=0,ans=0;
  int a,n;
  int i;

  scanf("%d",&n);

  for(i=0; i<n; i++){
    scanf("%d",&a);
    
   ans =  prime(a);

   if(ans == 0) all++;
  }

  printf("%d\n",all);

  return 0;
  
}

int prime(int a)
{
  int x;

  if(a == 2) return 0;

  else if(a<2 || a%2==0) return 1;

  x = 3;

  while(x<=sqrt(a)){
    if(a % x == 0) return 1;
    x = x + 2;
  }
  
  return 0;
  
}
  