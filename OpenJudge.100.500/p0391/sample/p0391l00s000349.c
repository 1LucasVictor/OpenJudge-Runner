#include <stdio.h>
#include <string.h>

void printFunc(int a, int b ,char str[1001]) {
	
	int i;
	//printf("print");
	for(i = a; i <= b; i++) {
		printf("%c",str[i]);
	}

	printf("\n");
	
}

void replaceFunc(int a, int b, char str[1001], char p[1001]) {
	int i;	
	//printf("replace");
	for(i = a ; i <= b; i++) {
		str[i] = p[i-a];
	}
	
}

void reverseFunc(int a, int b, char str[1001]) {
	int i;
	char tmp;
	//printf("reverse");
	for(i = 0 ; i <(b-a+1)/2 ; i++) {
		tmp = str[a+i];
		str[a+i] = str[b-i];
		str[b-i] = tmp;
	}
	
}

int main(int argc, const char * argv[]) {
	
	char str[1001],order[8],p[1001];
	int q,i,a,b;
	
	scanf("%s",str);
	
	scanf("%d",&q);
	
	for(i = 0 ; i < q ; i++){
		
		//printf("%s\n",str);
		scanf("%s",order);
		
		if(strcmp(order, "replace") == 0){
			scanf("%d %d",&a,&b);
			scanf("%s",p);
			replaceFunc(a,b,str,p);
			
		} else if(strcmp(order, "reverse") == 0) {
			scanf("%d %d",&a,&b);
			reverseFunc(a,b,str);
			
		}  else if(strcmp(order, "print") == 0) {
			scanf("%d %d",&a,&b);
			printFunc(a,b,str);
		} 
		
	}
	return 0;
	
}

