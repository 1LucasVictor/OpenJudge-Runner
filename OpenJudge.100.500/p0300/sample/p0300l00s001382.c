#include<stdio.h>
#include<string.h>

int N,N2;

int linearSearch(int A[],int key){
  int i=0,c=0,f;
  
  while(i!=N2){
    if(A[i]==key)c++;
    i++;
    }
  
  return c;
  
}


int main(){
  
  int i,j,c,sum=0;
  
  scanf("%d",&N);
  
  int s[N];
  
  for(i=0;i<N;i++){
    scanf("%d",&s[i]);
  }
  
  scanf("%d",&N2);
  
  int s2[N2];
  
  for(i=0;i<N2;i++){
    scanf("%d",&s2[i]);
  }
  
  
  for(i=0;i<N;i++){
    if(s[i]==s[i+1])i++;
      c =linearSearch(s2,s[i]);
      sum+=c;
  }

  printf("%d\n",sum);
  

  return 0;
}

