#include<stdio.h>
#include<math.h>
int main(){
  int data[5];
  int i=0,j=0,k;
  while(i<5){
    scanf("%d",&data[i]);
    i++;
  }
  scanf("%d",&k);
  for(i=0;i<4;i++){
  	for(j=i+1;j<5;j++){
      if(abs(data[i]-data[j])>k){
        puts(":(");
        return 0;
      }
    }
  }
  puts("Yay!");
  return 0;
}
