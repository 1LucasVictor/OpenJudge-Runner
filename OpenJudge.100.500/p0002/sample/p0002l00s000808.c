#include<stdio.h>
#include<math.h>

int main(){
  int i,j,n,a[4];

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<3;j++)scanf("%d",&a[j]);
    for(j=0;j<3;j++)
      if(a[j]>a[j+1]){
	a[3]=a[j];
	a[j]=a[j+1];
	a[j+1]=a[3];
      }
    if(sqrt(a[2]*a[2])==sqrt(a[0]*a[0]+a[1]*a[1]))printf("YES\n");
    else printf("NO\n");
  }

  return 0;
}