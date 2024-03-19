#include <stdio.h>

struct City {
	float x;
	float y;
};

struct City city_data[1000000];


int main(void){
  int n;
  int a;
  int sum=0;
  int i;
  scanf("%d", &n); scanf("%d", &a);
  
  for (i=1; i<=n; i++){
    scanf("%e", &city_data[i].x);
	scanf("%e", &city_data[i].y);
  if ( (city_data[i].x*city_data[i].x+city_data[i].y*city_data[i].y) <= a*a){
    sum++;
  }
  }
  printf("%d", sum);
}
