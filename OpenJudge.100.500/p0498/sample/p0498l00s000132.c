#include <stdio.h>

int main(){
	int pages,paper;
	
scanf("%d",&pages);
paper= pages/2;

if(pages%2 !=0){
	printf("%d",paper+1);

}
else{
	printf("%d",paper);
}
return 0;
}