#include <stdio.h>
int main(){
  char line[1000];
  int num;
  int sum;
  while(1){
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &num);
	if(num==0)
	  break;
	sum=0;
	while(1){
	  if(num==0)
		break;
	  sum+=(num%10);
	  num/=10;
	}
	printf("%d\n", sum);
  }
  return 0;
}

