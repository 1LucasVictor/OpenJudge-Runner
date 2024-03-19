#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
int main()
{
	int count = 0, arr[105][105] = { 0 };
	scanf("%d", &count);
	for (int i = 0; i < count; i++){
		int id = 0, num = 0, arr1[105] = { 0 };
		scanf("%d %d", &id, &num);
		for (int j = 1; j <= num; j++){
			scanf("%d", &arr1[j]);
		}
		for (int j = 1; j <= num; j++){
			for (int k = 1; k <= count; k++){
				if (arr1[j] == k){
					arr[id][k] = 1;
					break;
				}
			}
		}
	}
	for (int i = 1; i <= count; i++){
		for (int j = 1; j <= count; j++){
			printf("%d", arr[i][j]);
			if (j != count){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
