#include<stdio.h>

void swapN(int *,int *);
void swapC(char *,char *);
int isStable(int[],int[],int);


main(){
  
  int N;
  int i=0,j,minj,swapc=0;
  int in[100];
  int AN[100];
  char AM[100];

  scanf("%d",&N);
  
  for(i=0;i<N;i++){
    scanf(" %c%d",&AM[i],&in[i]);
  }
    for(i=0;i<N;i++){
      AN[i]=in[i];
  }
  
  
  
  
  for(i=0;i<N;i++){
    for(j=N-1;j>=1;j--){
      if(AN[j]<AN[j-1]){
	swapN(&AN[j],&AN[j-1]);
	swapC(&AM[j],&AM[j-1]);
      }
    }
  }
  for(i=0;i<N;i++){
    printf("%c%d",AM[i],AN[i]);
    if(i!=N-1)printf(" ");
    else printf("\n");
  }
  printf("Stable\n");


  
  
  
  
  
  for(i=0;i<N-1;i++){
    minj=i;
    for(j=i;j<N;j++){
      if(AN[j]<=AN[minj]){
	minj=j;
      }
    }
    swapN(&AN[i],&AN[minj]);
    swapC(&AM[i],&AM[minj]);
  }
  for(i=0;i<N;i++){
    printf("%c%d",AM[i],AN[i]);
    if(i!=N-1)printf(" ");
    else printf("\n");
  }
  if(isStable(in,AN,N)==0)printf("Stable\n");
  else if(isStable(in,AN,N)==1)printf("Not stable\n");
  
  
  
  
  
  return 0;
}

void swapN(int *x,int *y)
{
  int temp;
  
  temp=*x;
  *x=*y;
  *y=temp;
}

void swapC(char *x,char *y)
{
  char temp;
  
  temp=*x;
  *x=*y;
  *y=temp;
}


int isStable(int in[],int out[],int N)
{
  int i,j,a,b;
  for(i=0;i<N;i++){
    for(j=i+1;j<N;j++){
      for(a=0;a<N;a++){
	for(b=a+1;b<N;b++){
	  if(in[i]==in[j] && in[i]==out[b] && in[j]==out[a])return 1;
	}
      }
    }
  }
  return 0;
}