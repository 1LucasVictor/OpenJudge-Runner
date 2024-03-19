#include<stdio.h>

int main(){
  int n,i,j,c=0;
  int a[10];

  scanf("%d",&n);

  for(i=0 ; i<n ; i++){
    scanf("%d",&a[i]);
  }

  for(i=0 ; i<n ; i++){

    for(j=2 ; j<a[i] ; j++){
      if(a[i] % j == 0)break;
    }

    if(j == a[i]) c++;
  }

  printf("%d\n",c);

  return 0;
}