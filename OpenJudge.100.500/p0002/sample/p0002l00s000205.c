#include<stdio.h>
#include<stdlib.h>

int main(void){
  int n,i;
  int *a,*b,*c;
  scanf("%d",&n);
  a=malloc(sizeof(int)*n);
  b=malloc(sizeof(int)*n);
  c=malloc(sizeof(int)*n);
  for(i=0;i<n;i++){
    scanf("%d %d %d",&a[i],&b[i],&c[i]);
  }
  for(i=0;i<n;i++){
    if(a[i]*a[i]==b[i]*b[i]+c[i]*c[i]
     ||b[i]*b[i]==a[i]*a[i]+c[i]*c[i]
     ||c[i]*c[i]==b[i]*b[i]+a[i]*a[i])
      printf("YES\n");
    else printf("NO\n");
  }
  return 0;
}