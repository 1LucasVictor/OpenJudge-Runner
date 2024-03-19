#include <stdio.h>
#include <math.h>

int hantei(int);

int main(){
int i,kosu=0,n,data;

  scanf("%d",&n);

  for(i=0;i<n;i++){

scanf("%d",&data);
 
 if(hantei(data)==1) kosu++;
 
  }
  printf("%d\n",kosu);
  
  return 0;
  }

int hantei(int data){
  
  int i;
  
  if(data!=2 && data%2==0) return 0;
  else if (data==2) return 1;

  if(data!=3 && data%3==0) return 0;
  else if (data==3) return 1;

  if(data!=5 && data%5==0) return 0;
  else if (data==5) return 1;

  
  for(i=3;i<sqrt(data)+1;i++){
    if(data%i==0) return 0;
  }
  return 1;
}
  

