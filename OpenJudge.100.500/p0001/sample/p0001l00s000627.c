#include<stdio.h>
int main(){
  int a,b,total=1,i=10,j,ab;
  while(scanf("%d%d",&a,&b) !=EOF){
    ab=a+b;
    for(j=0;j<6;j++){
      if(ab/i>=1){
	total++;
      }
      else{
	break;
      }
      i=10*i;
    }
    printf("%d\n",total);
  }
  return(0);
}