#include <stdio.h>


int main(void) {

	// 1_3-A Print Many Hello World

	int a,b,c;
	int i,ans = 0;
	scanf("%d %d %d",&a,&b,&c);

	for(i=2; i<=c; i++){
		if(c%i==0){
			if(a<=i && i<=b){
				ans++;
			}
		}
	}
	printf("%d\n",ans);
        return 0;
}