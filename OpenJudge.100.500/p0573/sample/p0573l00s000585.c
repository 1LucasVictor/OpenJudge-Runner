#include<stdio.h>

int main(){
	
	//配列S,cntの用意
	char s[4];
	int cnt[4];
	scanf("%s" ,s);
	for(int i = 0; i < 4; i++){
		cnt[i] = 0;
	}
	//同じ文字が何回出てくるかカウント
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			if(s[i] == s[j]){
				cnt[i]++;
			}
		}
	}
	//カウントが２かどうかチェック
	int flg = 0;
	for(int i = 0; i < 4; i++){
		if(cnt[i] != 2){
			flg = 1;
		}
	}
	//表示
	if(flg == 0){
		printf("Yes\n");
	}else{
		printf("No\n");
	}

	return 0;
}