#include <stdio.h>

int main(void)
{
	int in[128], out[128], ini = 0, outi = 0, com, i;
	
	while (scanf("%d", &com) != EOF){
		if (com == 0){
			out[outi] = in[ini - 1];
			outi++;
			ini--;
		}
		else {
			in[ini] = com;
			ini++;
		}
	}
	
	for (i = 0; i < outi; i++){
		printf("%d\n", out[i]);
	}
	return (0);
}