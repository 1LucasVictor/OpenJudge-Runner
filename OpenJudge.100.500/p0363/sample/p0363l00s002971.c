#include<stdio.h>

int main(){
	int i,j;
	int ary1[3],ary2[3] = {0,0,0};
	scanf("%d %d %d",&ary1[0],&ary1[1],&ary1[2]);
	for(i = 0;i < 3;i++){
		if(ary1[0] > ary1[1]){
			ary2[0] = ary1[1];
			ary2[1] = ary1[0];
		}
		else{
			ary2[0] = ary1[0];
			ary2[1] = ary1[1];
		}
		for(j = 0;j < 2;j++){
			ary1[j] = ary2[j];
		}
		if(ary1[1] > ary1[2]){
			ary2[1] = ary1[2];
			ary2[2] = ary1[1];
		}
		else{
			ary2[1] = ary1[1];
			ary2[2] = ary1[2];
		}
		for(j = 0;j < 3;j++){
			ary1[j] = ary2[j];
		}
	}
	printf("%d %d %d\n",ary2[0],ary2[1],ary2[2]);
	return 0;
	
}