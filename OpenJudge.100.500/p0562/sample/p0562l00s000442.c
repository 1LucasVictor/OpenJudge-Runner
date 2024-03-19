#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//scanf("%d",&x);
//printf("%d",x);
//for(i=0;i<N;i++){  }
//if( == ){  }else{  }
//while( ){  }

int main()
{
	int i = 0;
	
	int A, B;
	
	scanf("%d",&A);
	scanf("%d",&B);
    int t = A - 1;
	while (A < B) {
		A = A+t;
		i++;
	}
	printf("%d\n",i+1);
  return 0;
}
