#include<stdio.h>
#include<math.h>
int main(){
 
  int n,m;
  scanf("%d %d",&n,&m);
  
  int b[n],x;
  int count = 0;
  int arr[n][2];
  for(int i = 0; i<n;i++){
  	for(int j = 0; j<2;j++){
    	scanf("%d",&arr[i][j]);
    }
    x = arr[i][0]*arr[i][0] + arr[i][1]*arr[i][1];
    b[i] = sqrt(x);
  }
  
  for(int a = 0;a<n;a++){
  
  	if(b[a]==m){
    count++;
    }
  }
  
  printf("%d",count);
 
}