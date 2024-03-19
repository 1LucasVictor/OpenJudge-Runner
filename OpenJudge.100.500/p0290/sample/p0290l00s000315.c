#include<stdio.h>
#include<math.h>
int main(){
  int cprime=0,num,i,numb[10000],j;
  scanf("%d",&num);
  for(i=0;i<num;i++){
    scanf("%d",&numb[i]);
  }
  for(i=0;i<num;i++){
    if(numb[i]==2){
      cprime++;
    }
    else if(numb[i]<2||numb[i]%2==0){}
    else{
      while(1){
	for(j=3;j<=sqrt((double)numb[i]);j+=2)
	  if(numb[i]%j==0)break;
	cprime++;
	break;
      }
    }
  }
  printf("%d\n",cprime);
  return 0;
}