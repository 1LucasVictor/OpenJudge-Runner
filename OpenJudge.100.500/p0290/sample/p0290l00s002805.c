#include<stdio.h>
int main(){
int i=0;
int j,k,a;
int count=0;
int n[10000];
scanf("%d",&a);
for(i=0;i<a;i++){
  scanf("%d",&n[i]);
}
for(i=0;i<a;i++){
  k=0;
  for(j=1;j<=10000;j++){
    if(n[i]%j==0){
      k++;
    }
  }
    if(k==2){
      count++;
    }
  }
  printf("%d\n",count);
  return 0;
}
