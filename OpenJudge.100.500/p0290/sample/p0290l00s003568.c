#include<stdio.h>
#include<math.h>

int judge(int);
int main(){
  int n,a,i,j,count = 0,judge;
  scanf("%d",&n);
  for(i = 0;i < n;i++){
    scanf("%d",&a);
    if(a == 2) judge = 0;
    else if(a % 2 == 0) judge = 1;
    else{
      judge = 0;
      for(j = 3;j <= sqrt(a);j += 2){
	if(a % j == 0){
	  judge = 1;
	  break;
      }
      }
    }
    if(judge == 0) 
      count++;
    
  }
    printf("%d\n",count);
    return 0;
}