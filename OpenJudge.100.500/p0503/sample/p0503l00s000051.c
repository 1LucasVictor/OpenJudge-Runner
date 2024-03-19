#include <stdio.h>
#include <string.h>
/*
static struct{
	unsigned h : 1;
}obj[100000001];
*/
long A[200200];
  /* �z��̗v�f���������� */
void Swap(long int x[ ], long int i, long int j)
{
    long int temp;

    temp = x[i];
    x[i] = x[j];
    x[j] = temp;
}

  /* �N�C�b�N�\�[�g���s�� */
void QSort(long x[ ], long int left, long int right)
{
    long int i, j;
    long int pivot;

    i = left;                      /* �\�[�g����z��̈�ԏ������v�f�̓Y�� */
    j = right;                     /* �\�[�g����z��̈�ԑ傫���v�f�̓Y�� */

    pivot = x[(left + right) / 2]; /* ��l��z��̒����t�߂ɂƂ� */

    while (1) {                    /* �������[�v */

        while (x[i] < pivot)       /* pivot ���傫���l�� */
            i++;                   /* �o��܂� i �𑝉������� */

        while (pivot < x[j])       /* pivot ��菬�����l�� */
            j--;                   /*  �o��܂� j ������������ */
        if (i >= j)                /* i >= j �Ȃ� */
            break;                 /* �������[�v���甲���� */

        Swap(x, i, j);             /* x[i] �� x[j]������ */
        i++;                       /* ���̃f�[�^ */
        j--;
    }

    if (left < i - 1)              /* ��l�̍��� 2 �ȏ�v�f������� */
        QSort(x, left, i - 1);     /* ���̔z��� Q �\�[�g���� */
    if (j + 1 <  right)            /* ��l�̉E�� 2 �ȏ�v�f������� */
        QSort(x, j + 1, right);    /* �E�̔z��� Q �\�[�g���� */
}



int main()
{
	long i,N,tmp;
	i=0;
	scanf("%ld",&N);
	//for(i=0;i<100010100;i++)obj[i].h=0;
	for(i=0;i<N;i++){
		scanf("%ld",&A[i]);
	}
	QSort(A,0,N-1);
	
	for(i=0;i<N-1;i++){
		if(A[i]==A[i+1]){
			printf("NO\n");
			return 0;
		}
	}
	
	printf("YES\n");
	return 0;
}