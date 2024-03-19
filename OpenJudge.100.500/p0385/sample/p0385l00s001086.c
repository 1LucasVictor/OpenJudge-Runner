#include<stdio.h>



main()
{
	int sum;
	int i;
	char buf[1001];
	
	do{
		i=0;
		sum=0;
		
		scanf("%s",buf);
		
		if(buf[0]=='0'){
			break;
		}
		
		while(buf[i]!='\0'){
			if('0' <= buf[i] && buf[i]<='9'){
				sum += (buf[i] - '0');
			}
			i++;
		}
		printf("%ld\n",sum);
	}while(1);
	
	return 0;
}