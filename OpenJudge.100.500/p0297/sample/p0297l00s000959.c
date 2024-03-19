#include <stdio.h>
typedef struct{
	int num;
	char name[15];
}que;
que B[10100];
void Search(int n,int tmp,que B[]);
int main(void){
	int i,n,tmp;
	char str[101000];

	scanf("%d %d", &n, &tmp);
	for(i = 0; i < n; ++i) 
		scanf(" %s %d", B[i].name, &B[i].num);
	Search(n,tmp,B);
	return 0;
}

void Search(int n,int tmp,que B[]){
	int i,j,zzz,cnt,time;
	for(i=0,cnt=0,time=0;cnt<n;i=(i+1)%n){
		if(B[i].num <= 0) continue;
		zzz = tmp < B[i].num ? tmp : B[i].num;
		B[i].num -= zzz;
		time += zzz;
		if(B[i].num <= 0) {
			printf("%s %d\n",B[i].name,time);
			++cnt;
    	}
	}	
}