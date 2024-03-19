#include<stdio.h>
#include<math.h>
int main(){
  int n,a[10000],cnt=0,i,j,k=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
    k=0;
    if(a[i]==2){
      cnt+=1;
      continue;
    }
    if(a[i]%2==0)continue;
    j=3;
    while(j<sqrt((double)a[i])){
      if(a[i]%j==0){
	k=1;
	break;}
      j=j+2;}
    if(k==0){
      cnt+=1;}}
  printf("%d\n",cnt);

  return 0;
}