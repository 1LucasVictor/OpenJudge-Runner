#include<stdio.h>
main(){
  int a[1000000]={0},i,j,n,cnt;
  while(scanf("%d",&n)!=EOF){
    for(i=0;i<=n;i++)a[i]=0;
    cnt=0;
    for(i=2;i<=n;i++){
      if(a[i]==0){
    cnt++;
    for(j=1;i*j<=n;j++){
      a[i*j]=1;
    }      
      }
    }
 
 
    printf("%d\n",cnt);
  }
  return 0;
}
