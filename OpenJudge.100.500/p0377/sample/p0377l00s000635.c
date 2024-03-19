#include <stdio.h>
int main(){

  int n,i,j,k,c[4][13],y;
  char x;

  for (i = 0; i < 4; i++){

    for (j = 0; j < 13; j++){

      c[i][j]=0;

    }

  }

  scanf("%d",&n);

  for (k = 0; k < n*2; k++){

    scanf("%c %d",&x,&y);

    if (x == 'S'){

      c[0][y-1]=1;

    } else if (x == 'H'){

      c[1][y-1]=1;

    } else if (x == 'C'){

      c[2][y-1]=1;

    } else if (x == 'D'){

      c[3][y-1]=1;

    }

  }

    for (i = 0; i < 4; i++){

      for (j = 0; j < 13; j++){

	if (c[i][j] == 0){

	  if (i == 0){

	    printf("S %d",j+1);

	  } else if (i == 1){
	      
	      printf("H %d",j+1);
	      
	  } else if (i == 2){
	     
	      printf("C %d",j+1);
	      
          } else if (i == 3){
	      
	      printf("D %d",j+1);

	    }

	  printf("\n");

	}

      }

    }
    
    return 0;	      

}