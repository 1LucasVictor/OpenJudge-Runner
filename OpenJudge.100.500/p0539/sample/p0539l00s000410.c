#include<stdio.h>

int main(void){

int n,count=0,i,j;

scanf("%d",&n);

for(i=1;i<10;i++){
  for(j=1;j<10;j++){
    if(i*j==n){
      count=1;
      break;
    }
  }
if(j!=10){break;}
}

if(count==1){printf("Yes");}
if(count==0){printf("No");}

return 0;
}
