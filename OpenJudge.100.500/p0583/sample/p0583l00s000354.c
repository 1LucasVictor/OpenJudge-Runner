#include <stdio.h>

int main(void)
{
	int n,a,b,c,d,i,flag=0;
	char s[200000];
	scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
	scanf("%s",s);
	
	for(i=0;i<n;i++){
		if(s[i] == '#' && s[i+1] == '#'){
			//printf("NO test1\n");
			flag=0;
			break;
		}
		if(c>d){
			if(s[i] == '#' && s[i+1] == '.' && s[i+2] == '.' && s[i+3] == '#'){
				//printf("NO test2\n");
				flag=0;
				break;
			}else{
				//printf("YES test3\n");
				flag=1;
			}
		}else{
			//printf("YES test4\n");
			flag=1;
		}
	}
	if(flag == 0){
		printf("No\n");
	}else{
		printf("Yes\n");
	}
	
	
	return 0;
}
