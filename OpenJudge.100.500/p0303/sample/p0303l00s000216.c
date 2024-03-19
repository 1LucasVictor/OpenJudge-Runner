#include<stdio.h>
int main()
{
  int sum=0,i,n,k,w[100000],P=0,a=0;
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++){
    scanf("%d",&w[i]);
  }
  w[n]=-1;
  while(1){
    for(i=0;i<k;i++){
      if(w[a]<=P){
	while(sum+w[a]<=P && w[a]!=-1){
          sum+=w[a];
          a++;
	}
      }
      sum=0;
    }
    if(a==n)break;
    a=0;
    P++;
  }
  printf("%d\n",P);
  return 0;
}