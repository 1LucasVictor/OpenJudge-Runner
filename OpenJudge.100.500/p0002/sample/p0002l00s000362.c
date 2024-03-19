#include<stdio.h>

void sort(int m[]);

int main(void){
	int i,n,m[3];
	char s[128];

	sscanf(fgets(s,sizeof(s),stdin),"%d",&n);

	for(i=0;i<n;i++){
		fgets(s,sizeof(s),stdin);
		sscanf(s,"%d %d %d",m,m+1,m+2);

		if((m[0] > m[1] + m[2])||(m[1] > m[0] + m[2])||(m[2] > m[0] + m[1])){
		//»à»àOp`ª¬§µÈ¢ê
			printf("NO\n");
			continue;
		}

		sort(m);

		if((m[0]^2) == (m[1]^2) + (m[2]^2)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return(0);
}

void sort(int m[]){

	int i,j,t;

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(m[i]>m[j]){
				t = m[i];
				m[i] = m[j];
				m[j] = t;
			}
		}
	}
}