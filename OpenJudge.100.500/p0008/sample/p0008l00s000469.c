#include<stdio.h>
int main(void)
{
  int n;
  int i,j;
  int k=0;

  while(scanf("%d", &n)!=EOF){
    k=0;
    for(i=2;i<=n;i++){
      for(j=2;j<=i;j++){
	//	printf("%d %d %d\n",i,j,k);
	if(j==i)k++;
	if(i%j==0)break;
      }
    }
    printf("%d\n", k);
  }
  return 0;
}