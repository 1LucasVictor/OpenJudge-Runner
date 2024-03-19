#include <stdio.h>
#include <string.h>
int main(void){
	int B[100][100],A[100],a,b,i,j,n,sum;
	char str[100000],*line;

	fgets(str,sizeof(str),stdin);
	sscanf(str,"%d %d",&a,&b);
	for(i=0;i<a;i++){
		fgets(str,sizeof(str),stdin);
		line = strtok(str," ");
		sscanf(line,"%d",&n);
		B[i][0] = n;
		for(j=1;j<b;j++){
			line = strtok(NULL," ");
			sscanf(line,"%d",&n);
			B[i][j] = n;
		}
	}
	for(i=0;i<b;i++){
		fgets(str,sizeof(str),stdin);
		sscanf(str,"%d",&n);
		A[i] = n;
	}
	for(i=0;i<a;i++){
		sum = 0;
		for(j=0;j<b;j++)
			sum += B[i][j]*A[j];
		printf("%d\n",sum);
	}
	return 0;
}