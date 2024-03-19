#include <stdio.h>


int main(void)
{
	int ya=0, n, field[11]={0}, removed[11]={0}, crpos=0, rmv=0;

	while( scanf("%d", &n) != EOF ){
		if(n == -1){ break; }
		if(n == 0){
			//pop
			removed[rmv] = field[crpos-1];
			field[crpos] = 0;
			crpos--;
			rmv++;
		}else{
			//push
			field[crpos] = n;
			crpos++;
		}
	}

	while(removed[ya] != 0){
		printf("%d\n", removed[ya]);
		ya++;
	}
	return 0;
}