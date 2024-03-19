#include<stdio.h>
#define NUM 10000
int main(){
  int i,j,n,a[NUM],b=0,c;

  scanf("%d",&n);

  for(i = 0; i < n; i++)
    scanf("%d",&a[i]);

  for(i = 0; i < n; i++){

    c = 0;
    
    for(j = 1; j <= a[i]; j++)
      if(a[i]%j == 0) c++;

    if(c == 2) b++;
  }

  printf("%d\n",b);

  return 0;
}