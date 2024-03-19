#include<stdio.h>

int main(){
  int i,j,l,max,a[200000];
  

  scanf("%d",&l);

  for(i = 0; i < l; i++)
    scanf("%d",&a[i]);
  max = a[1] - a[0];
 
  for(i = 2; i < l; i++)
    for(j = 0; j < i; j++)
      if(max < (a[i] - a[j]))
	max = a[i] - a[j];

  printf("%d\n",max);

  return 0;
}

