#include <stdio.h>
#include <stdlib.h>
int main()
{
	int W,H;//長方形の幅W,高さH
	int x,y,r;//円の(x,y)座標,半径r

	scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
	//x=abs(x);
	//y=abs(y);
	if(((x+r)>W || (x-r)<0) || ((y+r)>H || (y-r)<0)){//長方形と円の条件式
		printf("No\n");//はみ出た
	}else{
		printf("Yes\n");//収まっている
	}
	return 0;
}
