#include <stdio.h>
#include <string.h>
void replace(char str1[], int a, int b, char str2[]);
void reverse(char str[], int a, int b);
void print(char str[], int a, int b);
int main(){
  char line[1002];
  int i, j;
  char order[1000];
  char *str_ptr;
  int a, b;
  char temp[1000];
  int q;
  //
  fgets(line,sizeof(line), stdin);
  line[strlen(line)-1]='\0';
  //
  fgets(order, sizeof(order), stdin);
  sscanf(order, "%d", &q);
    //
  for(i=0; i<q; ++i){
  	fgets(order, sizeof(order), stdin); /* 命令の読み込み */
  	order[strlen(order)-1]='\0'; /* 改行文字の削除 */
  	str_ptr=strtok(order, " ");	 /* 命令の種類 */
  	strcpy(temp, order);		 /*  */
  	str_ptr=strtok(NULL, " ");
  	a=atoi(str_ptr);
  	str_ptr=strtok(NULL, " ");
  	b=atoi(str_ptr);
	//
  	if(strcmp(temp, "replace")==0){
  	  str_ptr=strtok(NULL, " ");
	  str_ptr[strlen(str_ptr)-1]=='\0';
	  replace(line, a, b, str_ptr);
  	}else if(strcmp(temp, "reverse")==0)
  	  reverse(line, a, b);
  	else if(strcmp(temp, "print")==0)
  	  print(line, a, b);
  }
  return 0;
}
void replace(char str1[], int a, int b, char str2[]){
  int i;
  int n;
  n=b-a+1;
  for(i=0; i<n; ++i)
	str1[a+i]=str2[i];
  
}
void reverse(char str[], int a, int b){
  int n;
  n=b-a+1;
  char temp[n];
  int i;
  for(i=0; i<n; ++i)
	temp[i]=str[a+i];
  for(i=0; i<n; ++i)
	str[a+i]=temp[n-1-i];
}
void print(char str[], int a, int b){
  int i;
  for(i=a; i<=b; ++i){
	printf("%c", str[i]);
	if(i==b)
	  printf("\n");
  }
}

