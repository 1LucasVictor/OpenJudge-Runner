#include<stdio.h>
	int main(){
		int n,a[10000],i,j,max,sum;
		while(scanf("%d",&n),n){
			for(i=0;i<n;i++)
				scanf("%d",&a[i]);
			max = 0;

    for(i=0;i < n-1;i++){
        int sum,j;
        sum = a[i];
        for(j=i+1;j<n;j++){
            sum+=a[j];
            if(max <sum){
                max =sum;
            }
        }
    }

			printf("%d\n",max);
		}
		return 0;
}
		