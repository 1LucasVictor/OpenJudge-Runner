#include<stdio.h>
#include<math.h>
int main(){
 
  int n,m;
  scanf("%d %d",&n,&m);
  
  int i,j;
  int count = 0;
  int arr[n][2];
  for( i = 0; i<n;i++){
  		for(j = 0; j<2;j++){
    	scanf("%d",&arr[i][j]);
    }
    
    if(arr[i][0]*arr[i][0] + arr[i][1]*arr[i][1]<=m*m){
    count++;
    }
    
  }
  
/*  for(a = 0;a<n;a++){
  	printf("%d",b[a]);
  	if(b[a]==m){
    count++;
    }
  }
  */
  
  printf("%d",count);
 
}