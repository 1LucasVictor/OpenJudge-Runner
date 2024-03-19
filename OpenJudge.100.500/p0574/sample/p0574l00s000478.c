#include<stdio.h>

int main(){
	int cord[4];
	int in;

	scanf("%d",&in);
  	cord[0]=in/1000;
	in=in-cord[0]*1000;
	cord[1]=in/100;
	in=in-cord[1]*100;
	cord[2]=in/10;
	in=in-cord[2]*10;
	cord[3]=in/1;
	in=in-cord[3]*1;
	if((cord[0]==cord[1])||(cord[1]==cord[2])||(cord[2]==cord[3])){
	printf("Bad\n");
    }
	else
    {
	printf("Good\n");
    }
	return 0;
}