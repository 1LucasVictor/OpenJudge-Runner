#include<stdio.h>
#include<stdlib.h>

#define IMAX 2147483647
#define WHITE 1
#define BLACK -1
#define GRAY 0

typedef struct{
  int d;
  int p;
  int color;
  int M[100];
} Point;

int root(Point *, int);

int main(){
  Point *A;
  int i,j,n;
  
  scanf("%d",&n);

  A=(Point *)malloc(sizeof(Point *) * n);
  
  //for(i=0;i<n;i++) A[i].M=(int *)malloc(sizeof(int) * n);
  
  for(i=0;i<n;i++) for(j=0;j<n;j++){
      scanf("%d",&A[i].M[j]);
      if(A[i].M[j] == -1) A[i].M[j]=IMAX;
    }

  //printf("\n");for(i=0;i<n;i++){for(j=0;j<n;j++)printf(" %d",A[i].M[j]);printf("\n");}

  printf("%d\n",root(A,n));

  return 0;
}

int root(Point *A,int n){
  int min,u,i,sum=0;
  
  for(u=0;u<n;u++){
    A[u].color=WHITE;
    A[u].d=IMAX;
    A[u].p=-1;
  }
  A[0].d=0;

  while(1){
    u=-1;
    min=IMAX;
    
    for(i=0;i<n;i++) if(A[i].color != BLACK && A[i].d < min){
	//printf("min=%d,A[%d].d=%d\n",min,i,A[i].d);
	min=A[i].d;
	u=i;
      }

    //printf("u=%d\n",u);

    if(u == -1) break;

    A[u].color = BLACK;

    for(i=0;i<n;i++) if(A[i].color != BLACK && A[u].M[i] != IMAX)if(A[u].M[i] < A[i].d){
	A[i].d=A[u].M[i];
	A[i].p=u;
	A[i].color=GRAY;
	//printf("i=%d,d=%d,p=%d,color=%d\n",i,A[i].d,A[i].p,A[i].color);
      }
  
  }
  for(i=0;i<n;i++) if(A[i].p != -1){
      sum+=A[i].M[ A[i].p ];
      //printf("A[%d].M[%d]=%d\n",i,A[i].p,A[i].M[ A[i].p ]);
    }

  return sum;
}

