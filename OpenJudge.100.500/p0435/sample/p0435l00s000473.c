#include<stdio.h>
int main(){
 	int i;	
  	int ans = 0;
  	int n;
  	int d;
  	long a[400001];
  scanf("%d %d",&n,&d);
  for(i=0;i<n*2;i+=2){
    scanf("%ld %ld",&a[i],&a[i+1]);
  }
  for(i=0;i<n*2;i+=2){
   if(a[i]*a[i]+a[i+1]*a[i+1]<=d*d){
    ans++; 
   }
  }
  
  printf("%d",ans);
  return 0;
}

