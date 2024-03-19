#include<stdio.h>
int main(){
  int n,i,j,m,tmp;
  int a[3];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    if(a[0] < a[1]){
      tmp = a[0];
      a[0] = a[1];
      a[1] = tmp;
    }
    if(a[0] < a[2]){
      tmp = a[0];
      a[0] = a[2];
      a[2] = tmp;
    }
    if(a[0]*a[0] == a[1]*a[1] + a[2]*a[2]){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}