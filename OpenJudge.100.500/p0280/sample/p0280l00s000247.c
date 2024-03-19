#include<stdio.h>
static const int MAX = 100;
static const int INFTY = (1 << 21);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

static int M[MAX][MAX];
int n;
int color[MAX];

int prim(){


	int min;
	int u;
	int array[MAX];
	int i,p;

	u = 0;

	for (int j = 0; j < n; j++){
		color[j] = 0;
		array[j] = 0;
	}

	i = 0;
	color[i] = 2;
	//printf("OK");

	while(1){
		min = INFTY;
		p = 0;
		//printf("COLOR %d\n", color[0]);
		for (int b = 0; b <= i; b++){
			//printf("OKOK1\n");
			for (int j = 0; j < n;j++){
				//printf("OKOK\n");
				if (color[j] == 0 && M[array[b]][j] != INFTY){
					if (min > M[array[b]][j]){
						min = M[array[b]][j];
						p = j;
						//printf("OK");
					}
				}
			}
		}

		if (p == 0){
			break;
		}

		u += min;
		color[p] = 2;
		array[i] = p;
		i++;
		//printf("OK");
	}

	return u;

}

int main(){
	scanf("%d", &n);
	int e;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			scanf("%d", &e);
			if (e == -1){
				M[i][j] = INFTY;
			}
			else  M[i][j] = e;

			//printf("%d\n", M[i][j]);
		}
	}
	

	printf("%d", prim());

}