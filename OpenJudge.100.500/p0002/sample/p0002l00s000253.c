#include<stdio.h>
int main(){
  int n,i,j,l;
  int data[3];
  scanf("%d",&n); 
  for(l=0;l<n;l++){
    scanf("%d %d %d",&data[0],&data[1],&data[2]);
    for(i=0;i<2;i++){
      for(j=0;j<2-i;i++){
	if(data[j]>data[j+1]){
	  int temp;
	  temp=data[j];
	  data[j]=data[j+1];
	  data[j+1]=temp;
	}
      }
    }
    if(data[0]*data[0]+data[1]*data[1]==data[2]*data[2]){
      printf("YES\n");
    } else{
      printf("NO\n");
    }
  }
  return(0);
}