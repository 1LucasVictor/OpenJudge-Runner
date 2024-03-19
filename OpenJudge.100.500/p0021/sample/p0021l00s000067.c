#include<stdio.h>
int main(){
  int i,j;
  int a[5001],n,s,t;
  a[0]=0;
  for(;;){
    scanf("%d",&n);
    if(n==0){
      break;
    }
    for(i=0;i<n;i++){
      scanf("%d",&a[i+1]);
      a[i+1]+=a[i];
    }
    s=-100000;
    for(i=0;i<n;i++)
      for(j=i+1;j<n+1;j++)
	if(a[j]-a[i]>s)
	  s=a[j]-a[i];
    printf("%d\n",s);
    /*
    t=0;
    for(i=1;i<=n;i++)
      for(j=0;j<=n-i;j++){
	s=0;
	for(k=0;k<i;k++)
	  s+=a[j+k];
	if(s>t)
	  t=s;
      }
    */
    //printf("%d\n",t);
  }
  return 0;
}