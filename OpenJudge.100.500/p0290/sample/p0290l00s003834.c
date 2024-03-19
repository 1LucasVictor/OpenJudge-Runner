#include<stdio.h>
int main(){

  int n,a[10000],i,j,count=0;

  scanf("%d",&n);

  for(i = 0; i < n; i++){
    scanf("%d",&a[i]);
  }

  for(i = 0; i < n; i++){

   
      
    for(j = a[i]-1;j > 2; j--){


      if(a[i] % j == 0)break;
    }

    if(a[i] % j != 0 || a[i] == 2)count++;
  }

  printf("%d\n",count);

  return 0;
}

