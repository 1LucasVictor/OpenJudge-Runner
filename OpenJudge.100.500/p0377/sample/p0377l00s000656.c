#include<stdio.h>
int main(){
  int n, i, j, k, card[4][13];
  char a;
  
  scanf("%d",&n);
  for( i=0; i < 4; i++){
    for( j=0; j < 13; j++){
      card[i][j] = 0;
    }
  }

  for( i = 0; i < n; i++ ){
    scanf("%s", &a);
    scanf("%d", &k);
    if( a == 'S'){
      card[0][k-1] = 1;
    }else if( a == 'H'){
      card[1][k-1] = 1;
    }else if( a == 'C'){
      card[2][k-1] = 1;
    }else{
      card[3][k-1] = 1;
    }
  }

  for( i = 0; i < 4; i++ ){
    for( j = 0; j < 13; j++ ){
      if( card[i][j] == 0 ){
	if( i == 0 ){
	  printf("S %d\n",j+1);
	}else if( i == 1){
	  printf("H %d\n",j+1);
	}else if( i == 2 ){
	  printf("C %d\n",j+1);
	}else{
	  printf("D %d\n",j+1);
	}
      }
    }
  }

  return 0;
}