#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define WIN 3;
#define DRAW 1;

struct Order{
	char move[8];
	int start,end;
	char change[1000];
};

void print(char *str_Org, int st,int ed){
	int i;
	for(i=st; i<=ed; i++){
		printf("%c",str_Org[i]);
	}
	printf("\n");
	return ;
}

void reverse(char *str_Org, int st, int ed){
	int i,j;
	char str_Cpy[1001]={0};
	
	j = st;
	strcpy(str_Cpy,str_Org);
	
	for(i=ed; i>=st; i--){
		str_Org[j++] = str_Cpy[i];
	}
	memset(str_Cpy,'\0',strlen(str_Cpy));
	
	return ;
}

void replace(char *str_Org, int st, int ed, char *swc){
	int i,j;
	char str_Cpy[1001]={0};
	
	j = 0;
	strcpy(str_Cpy,str_Org);
	
	for(i=st; i<=ed; i++){
		str_Org[i] = swc[j++];
	}
	memset(str_Cpy,'\0',strlen(str_Cpy));
	
	return ;
}

int main(){
	
	int i,j,k,l;
	int num;
	char str_Org[1001]={0};
	struct Order ord[100]={0};
	
	scanf("%s",str_Org);
	scanf("%d",&num);
	for(i=0; i<num; i++){
		scanf("%s %d %d", ord[i].move, &ord[i].start, &ord[i].end);
		if( !strcmp(ord[i].move, "replace")){
			scanf("%s", ord[i].change);
		}
	}
	
	/*printf*/
	for(i=0; i<num; i++){
		if( !strcmp(ord[i].move,"print") ){
			print(str_Org, ord[i].start, ord[i].end);
		}else if(!strcmp(ord[i].move,"reverse") ){
			reverse(str_Org, ord[i].start, ord[i].end);
		}else if(!strcmp(ord[i].move,"replace") ){
			replace(str_Org, ord[i].start, ord[i].end, ord[i].change);
		}
	}
	
	return 0;
}


/*
	for(i=0; i<num; i++){
		scanf("%s %d %d", ord[i].move, &ord[i].start, &ord[i].end, ord[i].switch);
	}
	
		printf("%s\n",str_Org);
	printf("%d\n",num);
	for(i=0; i<num; i++){
		printf("order(%d):%s %d %d %s\n", i+1,ord[i].move, &ord[i].start, &ord[i].end, ord[i].switch);
	}


*/
