#include<stdio.h>
int main(){
  int a,b,c;
  int cnt=0;
  int i;
  scanf("%d %d %d",&a,&b,&c);
  for(i = a;i <= b;i++){
    if(c % i == 0){
      cnt++;
    }
  }
  printf("%d\n",cnt);
  return 0;
}
  
    

