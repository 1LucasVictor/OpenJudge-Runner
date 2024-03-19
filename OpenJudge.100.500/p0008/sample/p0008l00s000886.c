#include <stdio.h>

int IsPrime(int num)
{
	int i;
	
    if (num % 2 == 0) return 0; // ??¶??°????????????????????????
		
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
	int i,n,cnt;
	
	while(scanf("%d",&n)!=EOF){
		
		cnt=0;
		
		if (n == 1){
			 printf("%d\n", cnt);
			 continue;
		}
		
		for(cnt=1,i = 3; i < n+1;i++){
			cnt += IsPrime(i);
		}
		
		printf("%d\n", cnt);
	}
		
	return 0;
}