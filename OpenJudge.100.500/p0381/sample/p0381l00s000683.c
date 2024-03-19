#include<stdio.h>
int main(void)
{
  int n[10000],x[10000],a[10000];
  int i,j,k;
  int cnt=0;
  do{
    scanf("%d %d",&n[cnt],&x[cnt]);
    if(n[cnt]==0&&x[cnt]==0){
      break;
    }
    a[cnt]=0;
    for(i=1;i<=n[cnt]-2;i++){
      for(j=i+1;j<=n[cnt]-1;j++){
        for(k=j+1;k<=n[cnt];k++){
          if(k+j+i==x[cnt]){
            a[cnt]++;
          }
        }
      }
    }
    cnt++;
  }while(1);
  for(i=0;i<cnt;i++){
    printf("%d\n",a[i]);
  }
  return 0;
}