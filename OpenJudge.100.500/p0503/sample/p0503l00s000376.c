#include <stdio.h>
#include<string.h>

int main(void)
{
int n,i,j,tf=0;
int a[2000001];

//入力
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}

//処理
for(j=0;j<n-1;j++){
	for(i=0;i<n;i++){
	if(a[j]!=a[i+1]){
		tf=1;
	}
	}
}

//出力
if(tf==1)//異なるなら
printf("YES");
if(tf==0)//異ならないなら
printf("NO");

return 0;
}