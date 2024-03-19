#include <stdio.h>

typedef struct {
	float data[2];
} D_SET;

int main(void)
{
	D_SET d[4];
	int i, j;
	int no;
	float hj[2][2];
	int hj_count;
	int flag;
	
	scanf("%d", &no);
	
	while (no > 0){
		hj_count = 0;
		flag = 0;
		for (i = 0; i < 4; i++){
			for (j = 0; j < 2; j++){
				scanf("%f", &d[i].data[j]);
			}
			if ((i + 2) % 2 == 1){
				for (j = 0; j < 2; j++){
					hj[hj_count][j] = d[i - 1].data[j] - d[i].data[j];
				}
				hj_count++;
			}
		}
		if (hj[0][0] == hj[1][0] && hj[0][1] == hj[1][1]){
			flag = 1;
		}
		
		if (flag == 1){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
		no--;
	}
	
	return (0);
}