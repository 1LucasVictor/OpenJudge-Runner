#include <stdio.h>

int main(void)
{
	
	int a[3];
	int max = 0, min = 10000, mediam = 0, soe;
	
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	
	for (soe = 0; soe < 3; ++soe){
		if (a[soe] > max){
			max = a[soe];
		}
		
	}
	
	for (soe = 0; soe < 3; ++soe){
		if(a[soe] < min){
			min = a[soe];
		}
		
	}
	
	for (soe = 0; soe < 3; ++soe){
		if(a[soe] != max && a[soe] != min){
			mediam = a[soe];
		}
		
	}

	printf("%d %d %d\n", min, mediam, max);
	
	return (0);
}