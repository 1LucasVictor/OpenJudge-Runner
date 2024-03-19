
  #include <stdio.h>

int main(){
  int i,j,n,q,sum=0;
  int S[10000];
  int T[500];

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&S[i]);
  }

  scanf("%d",&q);
  for(j=0;j<q;j++){
    scanf("%d",&T[j]);
  }

  for(i=0;i<n;i++){
    for(j=0;j<q;j++){
      if(S[i]==T[j])sum++;
    }
  }
  printf("%d\n",sum);

  return 0;
}