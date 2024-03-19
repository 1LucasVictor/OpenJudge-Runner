#include <stdio.h>

int main(){
  long n,m,k,i,j,time=0,tmp,hon=0,hon_tmp,max=0,result=0;
  long a[200001],b[200001];
  
  scanf("%ld %ld %ld",&n,&m,&k);
  for(i=0;i<n;i++){
    scanf("%ld",&a[i]);
  }
  a[i]=1000000001;
  for(i=0;i<m;i++){
    scanf("%ld",&b[i]);
  }
  b[i]=1000000001;
  
  for(i=0;i<m;i++){
    if(time+a[i]<=k){
      time+=a[i];
      hon++;
      
      tmp=time;
      hon_tmp=hon;
      
      for(j=0;j<m;j++){
        if(tmp+b[j]<=k){
          tmp+=b[j];
          hon_tmp++;
        } else {
          break;
        }
      }
      
      if(max<hon_tmp){
        max=hon_tmp;
      }
    } else {
      break;
    }
  }
  
  printf("%ld",max);
}
