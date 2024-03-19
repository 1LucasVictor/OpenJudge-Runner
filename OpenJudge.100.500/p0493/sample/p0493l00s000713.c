#include <stdio.h>

int main(void) {

  	int yen;
  	int happiness = 0;
  
  	//reads in money from stdin
  	scanf("%d", &yen);

  	happiness = 2*(yen-(yen%500)) + ((yen%500)-(yen%5));
  	printf("%d", happiness);
  
	return 0;
}