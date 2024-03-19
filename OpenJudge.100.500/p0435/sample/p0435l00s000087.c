#include <math.h>
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
  float d;
  scanf("%d", &n); scanf("%d", &a);
  
  for (i=1; i<=n; i++){
    scanf("%f", &city_data[i].x);
	scanf("%f", &city_data[i].y);
    d=sqrtf(city_data[i].x*city_data[i].x+city_data[i].y*city_data[i].y);
  if (d <= a){
    sum++;
  }
  }
  printf("%d", sum);
}