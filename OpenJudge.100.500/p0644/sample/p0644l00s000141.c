#include<stdio.h>
#include<math.h>
int main(void){
  
  int N;
  int s[4];
  int ct=0;
  int i;
  
  scanf("%d",&N);
  
  for(i=1;i<=3;i++){
    s[i]=(N/((int)pow(10,i-1)))%10;
    }
  
  for(i=1;i<=3;i++){
    if(s[i]==1)ct++;
  }
  
  printf("%d\n",ct);
  
  return 0;
  
}