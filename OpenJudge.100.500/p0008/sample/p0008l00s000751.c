#include <stdio.h>
#include <math.h>


int IsPrime(int num)
{
	int i;
	
    if (num < 2) return 0;
    else if (num == 2) return 1;
    else if (num % 2 == 0) return 0; // ??¶??°????????????????????????
		
    for (i = 3; i*i <= num; i += 2)
    {
        if (num % i == 0)
        {
            // ?´???°??§?????????
            return 0;
        }
    }

    // ?´???°??§??????
    return 1;
}

int main(void)
{
	int i,j,k,n,cnt=0;
	
	while(scanf("%d",&n)!=EOF){
		
		for(i=0;i<=n;i++){
			cnt += IsPrime(i);
		}
		
		printf("%d\n", cnt);
		cnt=0;
	}
		
	return 0;
}