#include <stdio.h>
int main(void){
	int i=0;
int tmp=0;
	scanf("%d",&i);
	tmp=i%10;
if(tmp==2||tmp==4||tmp==5||tmp==7||tmp==9){
puts("hon");
}else if(tmp==0||tmp==1||tmp==6||tmp==8){
puts("pon");
}else{
puts("bon");
}

}