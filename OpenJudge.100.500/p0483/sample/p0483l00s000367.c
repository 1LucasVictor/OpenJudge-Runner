#include<stdio.h>
#include<math.h>



int main(){

int n;
int count = 0;
scanf("%d",&n);

while(n!=0){
	int digit = n%10;
	if(digit==7){
		printf("Yes\n");
		count++;
		break;
	}
	n/=10;
}

if(count==0){
	printf("No\n");
}



return 0; 
} 