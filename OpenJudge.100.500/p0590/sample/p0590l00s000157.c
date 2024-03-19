#include<stdio.h>
int main(){
int a[5];
  int k;
  for(int i=0;i<5;i++){
	scanf("%d",&a[i]);
  }
  scanf("%d",&k);
  int c=0;
  for(int i=0;i<4;i++){
	for(int j=i+1;j<5;j++){
	if(a[j]-a[i]>k)c++;
    }
  }
  if(c>0)printf(":(");
  else printf("Yay!");
  return 0;
}