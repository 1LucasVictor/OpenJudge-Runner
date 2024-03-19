#include<stdio.h>
main(){
  int i,j,n,s,sum=0;
  int N[10000];
  scanf("%d",&n);
  for(i=0;i<n;i++) scanf("%d",&N[i]);
  for(i=0;i<n;i++){
    s=0;
    if(N[i]==2)sum++;
    else if((N[i] / 2) == 0)continue;
    else{
    for(j=2;j<=N[i];j++)if((N[i] % j) == 0)s++;
    if(s == 1)sum++;
}
  }
  printf("%d\n",sum);
  return 0;
}