#include<stdio.h>

int main (){
	int N,i,j,flag;
	scanf("%d",&N);
	flag = 0;
     int p[2][9] = {
	         {1,2,3,4,5,6,7,8,9},
              {1,2,3,4,5,6,7,8,9}
		    };
	for (i=0;i<9;i++){
		for (j=0;j<9;j++){
			if (p[0][i]*p[1][j]==N){
				printf("Yes\n");
			     flag=1;
			     j=9;
			     i=9;
			 }
		}
	}
	if (flag==0){
		printf("No\n");
	}
	return 0;
}
