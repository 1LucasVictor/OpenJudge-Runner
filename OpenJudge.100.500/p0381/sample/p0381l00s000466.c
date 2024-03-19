#include <stdio.h>

int main(){
  int n, x;
  while(1){
    scanf("%d%d", &n, &x);
    if(x == 0 && x == 0) break;

    int num1[n];
    int num2[n];
    int num3[n];

    int i =1;
    int j =1;
    int k =1;

    int count = 0;
  
    for(i = 1; i <= n-2; i++){
      num1[i] = i;
      for(j = i + 1; j <= n-1; j++){
	num2[j] = j;
	for(k = j+1;k <= n; k++){
	  num3[k] = k;
	  if(x == num1[i] + num2[j] + num3[k]){
	    if(num1[i] != num2[j] && num1[i] != num3[k] && num2[j] != num3[k])
	      count++;
	  }
	}
      }
    }
  
    printf("%d\n", count);
  }
  return 0;
}

