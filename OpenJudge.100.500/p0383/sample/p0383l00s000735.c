#include <stdio.h>

int main(void){
    int n, m, l, i, t, c;
	scanf("%d%d%d",&n,&m, &l);
	int array[110][110];
	int array2[110][110];
	long int array3[110][110];
	long int sum;

	for(i=0;i<n;i++) {
		for(t=0;t<m;t++) {
			scanf("%d",&array[i][t]);
		}
	}
	for(i=0;i<m;i++) {

		for(t=0;t<l;t++) {
			scanf("%d",&array2[i][t]);

		}
	}
	sum=0;

	for(i=0;i<n;i++) {
		for (c=0;c<l;c++) {
			for(t=0;t<m;t++) {
				sum+=array[i][t]*array2[t][c];

			}
			array3[i][c]=sum;
			printf("%lld",array3[i][c]);
			if(c+1 == l)
        printf("\n");
      else
        printf(" ");
			sum=0;
		}
	}

    
    return 0;
}
