#include<stdio.h>

void main()
{
	int kazu;
	int iti;

	scanf("%d", &kazu);

	iti = kazu % 10;
	if ((iti == 2) || (iti == 4) || (iti == 5) || (iti == 7) || (iti == 9)) {
		printf("hon");
	}
	else if ((iti == 0) || (iti == 1) || (iti == 6) || (iti == 8)) {
		printf("pon");
	}
	else {
		printf("bon");
	}
}