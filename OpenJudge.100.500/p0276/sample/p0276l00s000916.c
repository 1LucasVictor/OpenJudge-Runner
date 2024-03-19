#include<stdio.h>
int ADJ[101];
int G[100][100];


int main(){
  int n,i,j,k,number[100];
  int RESULT[100][100];
  
  for(i=0;i<100;i++){
    ADJ[i]=0;
    for(j=0;j<100;j++){
      RESULT[i][j]=0;
      G[i][j]=0;
    }    
  }
  
 
  
  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&number[i]);
    scanf("%d",&ADJ[number[i]]);
    for(j=0;j<ADJ[number[i]];j++){
      scanf("%d",&G[number[i]-1][j]);
    }
  }
  

  //---------- 
  for(i=0;i<n;i++){   
    for(j=0;j<ADJ[number[i]];j++){
      RESULT[i][G[i][j]-1]=1;
    }      
  }
  //----------
  //printf("%d\n",RESULT[0][3]);
  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d",RESULT[i][j] );
      if(j<n-1){
	printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}