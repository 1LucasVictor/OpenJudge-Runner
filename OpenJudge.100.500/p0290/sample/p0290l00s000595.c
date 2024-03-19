#include<stdio.h>
#include<math.h>
int main(){
  int data[10000],flag=0,i,j,n=0,sosuu=0;

  scanf("%d",&n);  
  for(i=0;i<n;i++){
    scanf("%d",&data[i]);
    flag=0;
    for(j=2;j<=sqrt(data[i]);j++){
      if(data[i]%j==0){
      flag=1;
      break;
      }
    }
    if(flag==0){
      sosuu++;
    }
  }
  printf("%d\n",sosuu);
}

