#include<stdio.h>

int main(){
	int hako[10]={0},j=0,i=0,out[10]={0};
	
	while(scanf("%d",&hako[i])!=EOF){
		if(hako[i]==0){
			out[j]=hako[i-1];
			j++;
			i--;
		}
		else if(hako[i]!=0){ i++; }
	}
	for(i=0;i<j;i++)printf("%d\n",out[i]);
return 0;
}