#include<stdio.h>
int main(void)
{
  int n,i,j,count=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    int a;
    scanf("%d",&a);
    if(a==2 || a==3) count++;
    else{
      for(j=2;j<=a/2;j++){
	if (a%j==0)break;
	if (j==a/2) {
	  count++;
	  // printf("%d\n",i);
	}
      }
    }
  }
  printf("%d\n",count);
  return 0;
}