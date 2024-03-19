#include <stdio.h>
#include <math.h>

int main(void)
{
  int num[30], c[30];
  int index = 0; 
  int count = 0;
  int i = 0;
  int j;
  int k = 6;
  while(scanf("%d", &num[index]) != EOF){
       if((1 <= num[index]) && (num[index] <= 999999))
	 index++;
       if(index == 30) break;
  }

  while(i < index){
    if(num[i] == 1){
      c[i] = 0;
      i++;
    }else if(num[i] == 2){
      c[i] = 1;
      i++;
    }else if((num[i] == 3) || (num[i] == 4)){
      c[i] = 2;
      i++;
      }else{ 
    j = 1;
    while((k-1)*j <= num[i]){
	if((k*j+1) <= num[i]) count++;
	if((k*j-1) <= num[i]) count++;
	  j++;
    }
    c[i] = count + 2;
    count = 0;
    i++;
    }
  }

  for(i = 0; i < index; i++){
    if(c[i] == 0){
      printf("%d\n", c[i]);
    }else if(c[i] == 1){
      printf("%d\n", c[i]);
    }else if(c[i] == 2){
      printf("%d\n", c[i]);
    }else{
	printf("%d\n", c[i]);
    }
  }
  return 0;
}