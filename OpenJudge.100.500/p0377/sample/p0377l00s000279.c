
int main()
{
	int A[99][99]={0},i,j,N,t;
	char s,F[4]="SHCD";
	scanf("%d\n",&N);
	for(i=0;i<N;A[s][t]=1,i++)
		scanf("%c %d\n",&s,&t);
	for(i=0;i<4;i++)
		for(j=1;j<14;j++)
			if(!A[F[i]][j])
				printf("%c %d\n",F[i],j);
	return 0;
}




