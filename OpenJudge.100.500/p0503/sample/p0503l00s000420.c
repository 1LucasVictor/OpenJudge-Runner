#include<stdio.h>

int main(){
  unsigned long int n,i,j,buf=0;
  unsigned long int a[200000];
  
  scanf("%ld",&n);
  for(i=0;i<n;i++){
  scanf("%ld",&a[i]);
  }

  for(i=0;i<n-1;i++){
    for(j=1;j<(n-i);j++){
      if(a[i]==a[i+j]){
	buf++;
      }
    }
  }

  if(buf==0){
    printf("YES");
  }else{
    printf("NO");
  }
}