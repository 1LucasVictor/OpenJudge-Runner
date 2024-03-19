#include <stdio.h>

int main(){
	int S;     //秒単位の時間
	int h,m,s; //h=時間,m=分,s=秒
	scanf("%d",&S);
	h = S / 3600;  
    m = (S - h * 3600) / 60;
    s = S - (h * 3600 + m * 60);
	
	printf("%d:%d:%d\n",h,m,s);
}
