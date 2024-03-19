#include<stdio.h>
#include<math.h>
int main(){
    int d,n;
    scanf("%d%d",&d,&n);
  if(d==0){
    printf("%d\n",n);
    return 0;
  }
  int sum =1;
  for(int i=0; i<d; i++){
    sum=sum*100;
  }
      printf("%d\n",sum*n);
    return 0;
}