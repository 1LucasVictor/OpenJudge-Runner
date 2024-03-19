#include <stdio.h>

int main(void)
{
	int n,i,j;
	long a[5500];
	long max, tmp;
	
	while (scanf("%d", &n) && n != 0){
	
		for (i = 0; i < n; i++){
			scanf("%ld", &a[i]);
		}
		
		max = a[0];
		tmp = 0;
		
        for(i = 0; i < n; i++){
            for(j = i; j < n; j++){
                tmp += a[j];
                if(max < tmp)
                    max = tmp;
            }
            tmp =0;
        }
        printf("%lld\n",max);
    }
  
    return 0;
}	