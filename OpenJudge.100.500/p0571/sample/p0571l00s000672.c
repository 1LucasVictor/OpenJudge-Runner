#include <stdio.h>
 
int main(){ 
	long L,R,f,s;
	scanf("%ld %ld",&L,&R);
	for(int i = L;i <= R;i++){
		if(i % 2019 == 0){
			printf("0");
			return 0;
		}
	}
	f = L * R % 2019;
	for(int i = L;i < R;i++){
		for(int j = i + 1;j <= R;j++){
			s = i * j % 2019;
			if(s < f){
				f = s;
            }
		}
	}
	printf("%ld",f);
	return 0;
}