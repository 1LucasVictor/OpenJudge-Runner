#include<stdio.h>
int main(){
  int n,fi[3]={1,1,1};
scanf("%d",&n);
while(1<n--){
  fi[2]=fi[0]+fi[1];
  fi[0]=fi[1];
  fi[1]=fi[2];
 }
printf("%d\n",fi[2]);
return 0;
}