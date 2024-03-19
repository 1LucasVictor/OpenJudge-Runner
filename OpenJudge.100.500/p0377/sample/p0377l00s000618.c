#include <stdio.h>
int main(){

  int n, i, ranknumber, number;
  int card[4][14];
  char rank, dummy, dummya, dummyb, outrank;

  for(ranknumber = 0; ranknumber <=3; ranknumber++){
    for(number = 1; number <= 13; number++){
      card[ranknumber][number] = 0;
    }
  }

  scanf("%d", &n);
  for(i = 1; i <= n; i++){
    scanf("%c", &dummya);
    scanf("%c%c%d",&rank,&dummy,&number);
    if(rank == 'S'){
      ranknumber = 0;
    }else if(rank == 'H'){
      ranknumber = 1;
    }else if(rank == 'C'){ 
      ranknumber = 2;
    }else if(rank == 'D'){
      ranknumber = 3;
    }

    card[ranknumber][number] = 1;

  }

  for(ranknumber = 0; ranknumber < 4; ranknumber++){
    for(number = 1; number <= 13; number++){
      if(card[ranknumber][number] == 0){
	if (ranknumber == 0){
	  outrank = 'S';
	}else if(ranknumber == 1){
	  outrank = 'H';
	}else if(ranknumber == 2){
	  outrank = 'C';
	}else if(ranknumber == 3){
	  outrank = 'D';
	}

	printf("%c %d\n", outrank, number);
      }
    }
  }
  
  return 0;
}