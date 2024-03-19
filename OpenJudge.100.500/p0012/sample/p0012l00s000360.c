#include <stdio.h>
int main(){
	int in[1000],out[1000],incn=0,outcn=0,n,i;
	//printf("start\n");
	while(1){
		if( scanf("%d",&n) == EOF)break;
		//printf("nyuryoku %d\n",n);
		if(n != 0){
			in[incn] = n;
			incn++;
			//printf("in %dban %d\n",incn,in[incn-1]);
		}else{
			incn--;
			out[outcn] = in[incn];
			outcn++;
		}
	}
	for(i = 0;i < 10;i++){
		if(!out[i]) break;
		printf("%d\n",out[i]);
	}
}