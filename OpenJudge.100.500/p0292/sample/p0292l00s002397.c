#include <stdio.h>

void swap(int *a, int *b) {　　// 変数を入れ替えるためのswap関数を作成

    int temp = *a;

    *a = *b;

    *b = temp;

}



int BubbleSort(int A[],int N) {   　　// flagを用いたバブルソート

    int i,j; 　　　　　　 //　ループ変数を宣言。

    int sw = 0;

    unsigned short flag = 1;

    for(i=0;flag;i++) {

        flag = 0;

        for(j=N-1;j>=i+1;j--) {

            if(A[j]<A[j-1]) {

                swap(&A[j],&A[j-1]);

                flag = 1;

                sw++;

            }

        }

    }

    return sw;

}



int main(void) {

    int i, A[100], N, sw;

    scanf("%d",&N);

    for(i=0;i<N;i++) scanf("%d",&A[i]);

    sw = BubbleSort(A,N);



    for(i=0;i<N;i++) {

        if (i) printf(" ");

        printf("%d",A[i]);

    }

    printf("\n%d\n",sw);

    return 0;

}
