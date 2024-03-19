#include<stdio.h>
int main(){
  int a[3],n,i,j,k,work;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[0]);
    scanf("%d",&a[1]);
    scanf("%d",&a[2]);
    for(j=0;j<3;j++){
      for(k=0;k<2;k++){
	if(a[k]>a[k+1]){
	  work=a[k];
	  a[k]=a[k+1];
	  a[k+1]=work;
	}
      }
    }
    if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]) printf("YES\n");
    else printf("NO\n");
  }
  return(0);
}