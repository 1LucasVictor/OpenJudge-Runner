#include<stdio.h>

int main(){
  int n; scanf("%d",&n);
  int f=0,t;
  for(int i=0; i<n; i++){
    scanf("%d",&t);
    if (t%2==0){ if((t%3!=0)&&(t%5!=0)) f=1; }
  }
  if(f==1) printf("DENIED\n");
  else printf("APPROVED\n");
  return 0;
}