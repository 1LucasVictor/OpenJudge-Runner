#include <stdio.h>
int main(void){
	
	int n;
	int a;
        int i;
	int max=0;
	int min=0;
	int murakami=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a);
		
		murakami=murakami+a;
		

                if(i==0){
                        max=a;
                        min=a;
                }
		if(max<a){
			max=a;
		}
	        if(min>a){
		        min=a;
		}
	}
		
		printf("%d %d %d\n",min,max,murakami);
	
	return 0;
}