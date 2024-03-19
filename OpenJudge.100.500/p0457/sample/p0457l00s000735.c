#include <stdio.h>
#include <string.h>

int main(){
  long n,m,k,i,hon_a,hon_b,time=0,result=0;
  long a[200000],b[200000];
  
  scanf("%ld %ld %ld",&n,&m,&k);
  for(i=0;i<n;i++){
    scanf("%ld",&a[i]);
  }
  for(i=0;i<m;i++){
    scanf("%ld",&b[i]);
  }
  
  hon_a=hon_b=0;
  for(i=0;i<(m+n);i++){
    if(time+a[hon_a]>k && time+b[hon_b]>k){
      break;
    } else {
      if(a[hon_a]<=b[hon_b]){
        time+=a[hon_a];
        result++;
        hon_a++;
      } else {
        time+=b[hon_b];
        result++;
        hon_b++;
      }
    }
  }
  
  printf("%ld",result);
}