#include <stdio.h>
int main(void){
	int counter=0,i,seisu[3],replace;//?????°?????????
	for(i=1;i<=3;i++){
	scanf("%d",&seisu[i-1]);
	}
	do{
		counter=0;
		for(i=1;i<=2;i++){
			if(seisu[i-1]>seisu[i]){
				replace=seisu[i-1];
				seisu[i-1]=seisu[i];
				seisu[i]=replace;
				counter++;
			}
		}
	}while(counter!=0);
	printf("%d %d %d\n",seisu[0],seisu[1],seisu[2]);
	return 0;

}