#include <stdio.h>


int main()
{
	int a,i,j;
	int vc[1000];
	int vd[1000];
	int ve[1000];
	int max[1000];
	int sec[1000];
	int thi[1000];

	scanf("%d",&a);

	for(i=0;i<a;i++){
		scanf("%d",&vc[i]);
		scanf("%d",&vd[i]);
		scanf("%d",&ve[i]);
	}

	for(i=0;i<a;i++){
		max[i] = vc[i];
		sec[i] = vd[i];
		thi[i] = ve[i];
		if(thi[i]>=sec[i]){
			j = sec[i];
			sec[i] = thi[i];
			thi[i] = j;
		}
		if(sec[i]>=max[i]){
			j = max[i];
			max[i] = sec[i];
			sec[i] = j;
		}
		if(max[i]*max[i]==sec[i]*sec[i]+thi[i]*thi[i])
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}