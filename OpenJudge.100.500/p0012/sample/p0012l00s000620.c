#include <stdio.h>


int main(void)
{
	int gorigoriHeadRockParty, n, yoshiko[11]={0}, deadly_muscle[11]={0}, taro_kun_to=0, yoshiko_san_ha_TOP=0;

	//大地に広がるじゃがいも畑////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	//カンブリア紀の地層/////////////////////////////////////////////////////////////三丁目のさちこさん////////
	/////////////俺の遺骨がうまってるとこ/////////////////////////////////////////////////////////
	//////////////////////////////////////////////ヨシュアん家/////////////////////////
	while( scanf("%d", &n) != EOF ){
		if(n == -1){ break; }
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

	gorigoriHeadRockParty = 0;
	while(deadly_muscle[gorigoriHeadRockParty] != 0){
		printf("%d\n", deadly_muscle[gorigoriHeadRockParty]);
		gorigoriHeadRockParty++;
	}
	return 0;
}