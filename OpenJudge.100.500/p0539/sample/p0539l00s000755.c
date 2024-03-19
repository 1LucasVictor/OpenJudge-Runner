#include <stdio.h>
int main(){
int a;
scanf("%d",&a);
int temp = 0;
for (int i=0;i<=9;i++){
	for(int j=0;j<=9;j++){
		if(i*j==a){
			temp = 1;
			break;
		}
	}
}
if(temp==1){
	printf("Yes");
}
else{
	printf("No");
}
return 0;
}
