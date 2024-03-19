#include <stdio.h>
#include <stdlib.h>

int main(){
	int dis[5],k;
	scanf("%d",&dis[0]);
	scanf("%d",&dis[1]);
	scanf("%d",&dis[2]);
	scanf("%d",&dis[3]);
	scanf("%d",&dis[4]);
	scanf("%d",&k);
	for (int i=0;i<4;i++){
		for (int j=i;j<5;j++){
			if (abs(dis[i]-dis[j])>k) {
				printf(":(\n");
				return 0;
			}
		}
	}
	printf ("Yay!\n");
	return 0;
}