#include<stdio.h>

int array[50];

int fib(int a){
  int ans;


  if(a  ==0 || a  ==1){
    return array[a]=1;
  }
  if(array[a]!=-1)return array[a];


  else {return array[a]=fib(a-1)+fib(a-2);}
  

}



int main(){

  int number;
  int ans;
  int i;

  
  for(i=0;i<50;i++){array[i]=-1;}
  
  scanf("%d",&number);

  ans=fib(number);


  

  printf("%d\n",ans);

  


  return 0;
}

