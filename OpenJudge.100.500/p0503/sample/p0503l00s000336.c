#include<stdio.h>
#include<stdlib.h>

int main(){

int A[200000],N,i=0,i2=0,t;
char st[2000000][10^9];

/*文字列入力*/
scanf("%d", &N);

st[i][i2]=getchar();
while(1){
st[i][i2]=getchar();
/*printf("%c\n", st[i][i2] );*/
	if(st[i][i2]==' '){i++;i2=0;}
		else if(st[i][i2]=='\n'){break;}
		else
		i2++;
}
/*文字列を数字に変換*/
for(i=0;i<N;i++){
A[i]=atoi(st[i]);
}
/**バブルソートで昇順にし、同数があれば入力する*/
for(i=0;i<N-1;i++){
	for(i2=N-1;i2>i;i2--){
		if(A[i2]<A[i2-1]){
			t=A[i2]; A[i2]=A[i2-1]; A[i2-1]=t;
		}else if(A[i2]==A[i2-1]){
			printf("NO\n"); return 0;
		}
	}
}

/*配列数を比較し、同じならYes 違うならNo*/
	printf("YES\n");
	return 0;
}