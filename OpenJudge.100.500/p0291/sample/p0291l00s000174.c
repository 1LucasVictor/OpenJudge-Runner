#include<stdio.h>

int main (){

  int n,i,j,maxdiff,a[200000];

  scanf("%d",&n);

  for(j=0 ; j<n ; j++){
    scanf("%d",&a[j]);    

    for(i=0 ; i<j ; i++){

      if(j==1)
	maxdiff = a[j]-a[i];

      if(a[j]-a[i]>maxdiff)
	maxdiff = a[j]-a[i];
    }
  }

  printf("%d\n",maxdiff);
  
  return 0;

}