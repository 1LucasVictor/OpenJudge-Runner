#include <stdio.h>
#include <math.h>

int main(){
	int n,m;
	if(scanf("%d%d*c", &n, &m)==EOF){return 0;}
	int s,c;
	int num[n];
	for(int i =0; i<n; i++){num[i]=0;}
	
	for(int i =0; i<m; i++){
		if(scanf("%d%d*c", &s, &c)==EOF){return 0;}
		
		//"0"の可能性がある場合は-1として区別
		if(n == 1 && s == 1 && c == 0){num[s-1]=-1;}
		//それ以外で最上の桁が0となることはない
		else if(n != 1 && s == 1 && c == 0){printf("-1\n");return 0;}
		//未入力であれば代入して良い
		else if(num[s-1]==0 || num[s-1]==c){num[s-1]=c;}
		else{	printf("-1\n");return 0;}
	}
	
	//result
	int ans = 0;
	
	if(num[0]== 0){num[0]= 1;} //最上の桁が未入力の場合
	if(num[0]== -1){num[0]= 0;}	//一桁の場合
	
	for(int i =0; i<n; i++){
		ans += pow(10, n-1-i)*num[i];
	}
	printf("%d\n",ans);	
	return 0;

}