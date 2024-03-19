#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>

/* define */
#define STR_LENGTH_MAX (1000)
#define ORDER_LENGTH_MAX (100)

#define STR_print "print"
#define STR_replace "replace"
#define STR_reverse "reverse"

//debug用
//#define DEBUG_BUILD

#ifdef DEBUG_BUILD
# define DEBUG_PRINT(fmt, ...)  printf(fmt, ## __VA_ARGS__)
# define DEBUG_F_PRINT(fp,fmt, ...)  fprintf(fp,fmt, ## __VA_ARGS__)
#else
# define DEBUG_PRINT(fmt, ...)
# define DEBUG_F_PRINT(fmt, ...)
#endif

#ifdef DEBUG_BUILD
FILE *fp;
#endif

/* struct */

/* func prototype */
void DoOrder(void);
void Print(int a,int b);
void reverse(int a,int b);
void replace(int a,int b,char p[]);

/* global field */
static char input[STR_LENGTH_MAX+1]={0};

int main(void) {
#ifdef DEBUG_BUILD
	fp=fopen("output.txt","w");
#endif
	int qNum=0;

	scanf("%s",input);
	scanf("%d",&qNum);
	for(int i=0;i<qNum;i++){
		DoOrder();
	}
#ifdef DEBUG_BUILD
	fclose(fp);
#endif
	return 0;
}

void DoOrder(void){
	char q[STR_LENGTH_MAX]={0};
	char p[ORDER_LENGTH_MAX+1]={0};
	scanf("\n%s",q);
	if(strcmp(q,STR_print)==0){
		int a=0,b=0;
		scanf("%d",&a);
		scanf("%d",&b);
		Print(a,b);

	}
	else if(strcmp(q,STR_reverse)==0){
		int a=0,b=0;
		scanf("%d",&a);
		scanf("%d",&b);
		reverse(a,b);
	}
	else if(strcmp(q,STR_replace)==0){
		int a=0,b=0;
		memset(p,0,sizeof(p));
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("\n%s",p);
		replace(a,b,p);
	}
}

void Print(int a,int b){
	for(int i=a;i<=b;i++){
		printf("%c",input[i]);
	}
	puts("");
}

void reverse(int a,int b){
	for(int i=0;i<=(b-a)/2;i++){
		DEBUG_PRINT("[%d] [%d]\n",a+i,b-i);
		int temp =input[a+i];
		input[a+i]=input[b-i];
		input[b-i]=temp;
	}
}
void replace(int a,int b,char p[]){
	for(int i=0;i<=(b-a);i++){
		input[a+i]=p[i];
	}
}

