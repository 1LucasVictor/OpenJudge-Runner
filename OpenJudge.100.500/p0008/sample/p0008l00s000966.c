#include<stdio.h>
#include<stdlib.h>
#include<memory.h>

int main(){
	int n,i,j,r,max=0;
	char* ptr;
	while(scanf("%d",&n)!=EOF){
		ptr=(char*)malloc(sizeof(char)*(n+1));
		memset(ptr,'1',n+1);
		for (i = 2; i * i <= n; i++)  
	    {  
	        if (ptr[i]=='1')  
	        {  
	            for (j = i * i; j <= n; j += i)  
	                ptr[j]='0';
	        }  
	    }  
	    for (i=2,r=0;i<=n;i++){
	    	if(ptr[i]=='1') r+=1;
	    }
		
		free(ptr);

		printf("%d\n",r );
	}

	return 0;
}