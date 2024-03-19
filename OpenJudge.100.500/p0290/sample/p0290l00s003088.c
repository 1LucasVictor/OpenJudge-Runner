#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
  int n,*a,i,k,p,kazu=0,s=0;
  scanf("%d",&n);
  a=(int *)malloc(n*sizeof(int));
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
    if(a[i]==2)kazu++;
    else if(a[i]%2 !=0&&a[i] !=1){
    for(k=2;k<=(sqrt(a[i]));k++){
      
      p=a[i]%k;
      if(p==0)s++;
     
      }
    if(s==0)kazu++;
    s=0;
  }
  }
  printf("%d\n",kazu);
  return 0;
}

