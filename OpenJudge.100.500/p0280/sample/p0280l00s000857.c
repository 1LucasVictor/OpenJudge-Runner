#include<stdio.h>
#include<limits.h>

int main(void){
  int num,i,j;
  int A[100][100];
  int a[100],b[100],c;
  int weight,minimum,moku,t;

  scanf("%d",&num);
  for(i=0;i<num;i++){
    a[i]=1;
    b[i]=0;
    for(j=0;j<num;j++){
      scanf("%d", &A[i][j]);
	    }
    }

    b[0] = 1;
    a[0] = 0;
    c = num - 1;
    weight = 0;

    while (c--){
      minimum = INT_MAX;

      for(j=0;j<num;j++){
	if(!b[j])continue;

	for(i=0;i<num;i++){
	  if(!a[i])continue;

	  t=A[j][i];
	  if(0<=t&&t<minimum){
	    moku = i;
	    minimum = t;
	  }
	}
      }
      b[moku]=1;
      a[moku]=0;
      weight+=minimum;
    }
    printf("%d\n",weight);
    return 0;
  }

	    
	  
	   

