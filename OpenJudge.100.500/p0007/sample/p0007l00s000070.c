/*


*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int a,b,c,d;
	int count=0,cnt=0;
	int n[1000];
	int i=0;
	while(1){
		int ret;
		ret=scanf("%d",&n[i]);
		if(ret==EOF){
			break;
		}
		if(n[i]>50){
			i--;
		}
		i++;
	}
	cnt=i;
	for(i=0; i<cnt; i++){
		for(a=0; a<=9; a++){
			for(b=0; b<=9; b++){
				for(c=0; c<=9; c++){
					for(d=0; d<=9; d++){
						if(a+b+c+d==n[i]){
							count++;
						}
					}
				}
			}
		}
		printf("%d\n",count);
		count=0;
	}
	return 0;
}