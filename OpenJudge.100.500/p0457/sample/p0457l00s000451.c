#include<stdio.h>

int ReadBooks(unsigned int a_N, unsigned int a_M, unsigned int a_K, unsigned int *a_aA, unsigned int *a_aB);

int main(void) {
	unsigned int iN,iM,iK;
	unsigned static int asA[200001], asB[200001];
	int i;
	unsigned int iRead;

	scanf("%d %d %d", &iN, &iM, &iK);
	for (i = 0;i < iN;i++) {
		scanf("%d", &asA[i]);
	}
	for (i = 0;i < iM;i++) {
		scanf("%d", &asB[i]);
	}
	
	iRead = ReadBooks(iN, iM, iK, asA, asB);

	printf("\n%d\n", iRead);

	return 0;
}

int ReadBooks(unsigned int a_N, unsigned int a_M, unsigned int a_K, unsigned int* a_aA, unsigned int* a_aB) {
	unsigned int iReadTime = 0;
	int			 iBookNumber = 0;
	unsigned int iANumber = 0;
	unsigned int iBNumber = 0;

	unsigned int j;

	while (iReadTime <= a_K) {
		if ((iReadTime + a_aA[iANumber] > a_K) && (iReadTime + a_aB[iBNumber] > a_K)) {
			break;
		}
		else if ((a_aA[iANumber] == 0x00) && (a_aB[iBNumber] == 0x00)) {
			break;
		}
		else if ((a_aA[iANumber] == 0x00) && (a_aB[iBNumber] != 0x00)) {
			iReadTime += a_aB[iBNumber];
			iBNumber++;
			iBookNumber++;
		}
		else if ((a_aA[iANumber] != 0x00) && (a_aB[iBNumber] == 0x00)) {
			iReadTime += a_aA[iANumber];
			iANumber++;
			iBookNumber++;
		}
		else if (a_aA[iANumber] < a_aB[iBNumber]) {
			iReadTime += a_aA[iANumber];
			iANumber++;
			iBookNumber++;
		}
		else if (a_aA[iANumber] > a_aB[iBNumber]) {
			iReadTime += a_aB[iBNumber];
			iBNumber++;
			iBookNumber++;
		}
		else {
			for (j = 1;(j + iANumber <= a_N) || (j + iBNumber <= a_M);j++) {
				if ((a_aA[j + iANumber]) < (a_aB[j + iBNumber])) {
					iReadTime += a_aA[iANumber];
					iANumber++;
					iBookNumber++;
					break;
				}
				else if ((a_aA[j + iANumber]) > (a_aB[j + iBNumber])) {
					iReadTime += a_aB[iBNumber];
					iBNumber++;
					iBookNumber++;
					break;
				}
				else {}
			}
			if ((a_aA[j + iANumber]) == 0x00) {
				iReadTime += a_aB[iBNumber];
				iBNumber++;
			}
			else if ((a_aB[j + iBNumber]) == 0x00) {
				iReadTime += a_aA[iANumber];
				iANumber++;
			}
			else {
				iReadTime += a_aA[iANumber];
				iANumber++;
			}
			iBookNumber++;
		}
	}
	
	return (iBookNumber);
}
