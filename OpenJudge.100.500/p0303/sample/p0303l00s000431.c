#include <stdio.h>
int main(int argc, char const *argv[]) {

  int num_baggages;
  int num_trucks;
  int p;
  int i;
  int sum_w;
  int count_trucks;

  scanf("%d%d",&num_baggages,&num_trucks);
  int baggages[num_baggages];

  for( i = 0 ; i < num_baggages ; i++ ){
    scanf("%d",&baggages[i]);
    p += baggages[i];
  }

  p /= num_trucks;
  
  while( 1 ){

    count_trucks = 1;
    sum_w = 0;

    for( i = 0 ; i < num_baggages ; i++ ){

      if( sum_w + baggages[i] < p ){
        sum_w += baggages[i];
      }else if( sum_w + baggages[i] == p ){
        sum_w = 0;
        count_trucks += 1;
      }else if( sum_w + baggages[i] > p ){
        sum_w = 0;
        count_trucks += 1;
        sum_w += baggages[i];
      }

    }

    if( count_trucks == num_trucks){
      break;
    }else if( count_trucks > num_trucks ){
      p++;
    }else if( count_trucks < num_trucks ){
      p--;
    }

  }

  printf("%d\n",p);

  return 0;
}