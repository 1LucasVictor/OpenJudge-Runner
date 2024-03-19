#include <stdio.h>
#include <string.h>

int ptn=0;
char wk[20][3];

int func_chk(int i,int k,int a)
{
	int p;
	for (p=0 ; p<ptn ; p++){
		if (!(((a != wk[p][1])&&(a != wk[p][2]))&&
			 ((k != wk[p][0])&& (k != wk[p][2]))&&
			 ((i != wk[p][0])&&(k != wk[p][1])))) {
			return 0;
		}
	}

	return 1;
}



int main()
{
	int n,x;
	int i,k,a;
	int rtn;

	memset(wk,'\0',sizeof(wk));
	while (1) {
		scanf("%d %d",&n,&x);
		if ((n==0)&&(x==0)) {
			return 0;
		}

		for (i=1 ; i<6 ; i++) {
			for (k=2 ; k<6 ; k++) {
				if (i==k) {
					continue;
				}
				for (a=2 ; a<6 ; a++) {
					if ((a==k)||(a==k)) {
						continue;
					}

					if ((i+k+a) == x) {
						rtn=func_chk(i,k,a);
						if (rtn != 0) {
							wk[ptn][0]=a;
							wk[ptn][1]=k;
							wk[ptn][2]=i;

							ptn++;
						}
					}
				}
			}
		}

		printf("%d\n",ptn);
	}
	return 0;
}