#include <stdio.h>
#include <math.h>

int main(void)
{
	int arr[1000],arr2[1000],n,i,j,c,k;
	i = 0;
	j = 0;
	while(scanf("%d",&n) != EOF){
		if(n == 0){
			arr2[i] = arr[j-1];
			printf("%d\n",arr[j-1]);
			j = j - 1;
			i = i + 1;
		}else{
			arr[j] = n;
			j = j + 1;
		}
		/*if(j == 0){
			break;
		}*/
	}
	//for(k = 0; k < i; k++){
	//	printf("%d\n",arr2[k]);
	//}
	return 0;
}