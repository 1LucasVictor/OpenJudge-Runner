#include <stdio.h>
#include <limits.h>
int main(){
  int i, max, num;
  int sum, a, b, get[100];
  while(1){
    scanf("%d", &num);
    if(num == 0){
      break;
    }
    max = INT_MIN;
    sum = 0;
    for(i=0;i<num;i++){
      scanf("%d",&get[i]);
    }
    for(a = num-1; a>= 0;a--){
      for(b = 0; b<=a;b++){
	if(get[b] < 0){
	  continue;
	}
	for(i = b;i <=a;i++){
	  sum += get[i];
	}
	if(max < sum){
	  max = sum;
	}
	sum = 0;
      }
    }
    printf("%d\n", max);
  }
  return 0;
}