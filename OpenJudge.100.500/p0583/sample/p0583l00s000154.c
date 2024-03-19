#include<stdio.h>
#include <string.h>

int main(){

int n,a,b,c,d,cnt=0,max=0,k,cnt2=0;
char s[200000];

scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
scanf("%s",&s);

k=c>d?c:d;

for(int j=a;j<k-1;j++){
	if(s[j]=='#'&&s[j+1]=='#'){cnt2++;break;}
	}
	
if(cnt2!=0){
	printf("No");
	}
else{
		
		
if(c>d){
	if (s[d-1]=='#'||s[d+1]=='#')
		printf("No");
	else{
	for(int i=b-2;i<d-1;i++){
		if(s[i]=='.'){
			cnt++;
			if(cnt>2) {max++;break;}
			}
		else{
			cnt=0;
			}
		}
		if(max==0) printf("No");
		else printf("Yes");
//		printf("%d\n",cnt);
	}
}
if(d>c){
	printf("Yes");
}

}
return 0;
}