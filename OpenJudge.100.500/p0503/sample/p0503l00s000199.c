#include<stdio.h>
int main(void){
  long int n,a[200000],i,j,f;
  scanf("%ld",&n);
  for(i=0;i<n;i++){
    scanf("%ld",&a[i]);
  }
  for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
      if(a[i]==a[j]){
	f++;
	break;
      }}
      if(f==1){
	break;
      }
    }
  if(f!=1){
    printf("YES\n");
  }else{
    printf("NO\n");
  }
  return 0;
}
