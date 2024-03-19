#include <stdio.h>

#define MAX (5000)

int main(void)
{
	int data[MAX];
	int tmp, max;
	int no;
	int i;
	
	while (1){
		scanf("%d", &no);
		if (no == 0) break;
		
		for (i = max = tmp = 0; i < no; i++){
			scanf("%d", &data[i]);
			tmp += data[i];
			if (tmp < 0) tmp = 0;
			if (max < tmp) max = tmp;
		}
		
		printf("%d\n", max);
	}
	
	return (0);
}