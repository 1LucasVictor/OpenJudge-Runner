#include <stdio.h>


int main(void)
{
	int gorigoriHeadRockParty=0, n, yoshiko[11]={0}, deadly_muscle[11]={0}, taro_kun_to=0, yoshiko_san_ha_TOP=0;

	while( scanf("%d", &n) != EOF ){
		if(n == 0){
			//pop
			deadly_muscle[yoshiko_san_ha_TOP] = yoshiko[taro_kun_to-1];
			yoshiko[taro_kun_to] = 0;
			taro_kun_to--;
			yoshiko_san_ha_TOP++;
		}else{
			//push
			yoshiko[taro_kun_to] = n;
			taro_kun_to++;
		}
	}

	while(deadly_muscle[gorigoriHeadRockParty] != 0){
		printf("%d\n", deadly_muscle[gorigoriHeadRockParty]);
		gorigoriHeadRockParty++;
	}
	return 0;
}