#include<stdio.h>
main()
{
	int i,j,n;
	
	while(scanf("%d",&n)!=EOF){
		int num[n],cnt=0;
		//numへ順番に数字を割り当てる
		for(i=0;i<n;i++){
			cnt+=1;
			num[i]=cnt;
		}
		//1は素数ではないので、０に
		num[0]=0;
		cnt=0;
		//素数の判定
		for(i=0;i<n;i++){
			if(num[i]!=0){
				cnt+=1;//素数でなければカウント
				for(j=i+2;j<n;j++){
					if(num[j]%num[i]==0){
						num[j]=0;//素数で割り切れたら０に
					}
				}
			}
		}
		printf("%d\n",cnt);//カウント結果を表示
	}
	return 0;
}