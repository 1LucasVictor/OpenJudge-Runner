#include<stdio.h>

int main(){
  int i,j;
  int n,k;
  scanf("%d%d",&n,&k);
  int a[120000];
  int r[120000];
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
    r[0]=a[0];
    for(i=1;i<n;i++){
      r[i]=r[i-1]+a[i];
    }
    long long int count=0;
    int t=0;
    int h=1;
    for(i=0;i<n;i++){
      if(r[i]>=k){
        count+=(n-i);
        t=1;
        break;
      }
    }
    if(t==1){
      j=0;
      while(h==1){
        if((r[i]-r[j])>=k){
          count+=(n-i);
          j++;

        }else{
          if(i<(n-1)){
          i++;
        }else{
          h=0;
        }
    }
}








      printf("%lld",count);
    }else{
      printf("%d",0);
    }
      return 0;
}
