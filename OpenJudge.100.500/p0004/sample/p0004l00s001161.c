#include<stdio.h>

int main(void){
    int a,b,big,small,i,j,tmp,yaku,bai;

    while(scanf("%d %d",&a,&b)!=EOF){

		if(a<b){
			big=a;
			small=b;
		}
		else{
			big=a;
			small=b;
		}

		i=big;
		j=small;

		while(1){
            if(i%j!=0){
				tmp=i;
				i=j;
				j=tmp%j;
			}
			else{
				yaku=j;
				break;
			}
		}

		bai=(a/yaku)*(b/yaku)*yaku;

		printf("%d %d\n",yaku,bai);

    }

    return 0;
}