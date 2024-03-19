#include<stdio.h>
#include<string.h>

void shuffle(char a[], int b);

int main(){
  int t,b,i;
  char ini[201];
  
  while(1){
  scanf("%s",ini);
  	if(ini[0]=='-') return 0;
  scanf("%d",&t);
  	for(i=0;i<t;i++){
  	scanf("%d",&b);
  	shuffle(ini,b);
	} 
  printf("%s\n",ini);
  }
 

  
  return 0;
}

void shuffle (char a[],int b){
	int i,len;
	char temp[200];
	len=strlen(a);
	for(i=0;i<b;i++) temp[i]=a[i];
	for(i=0;i<len-b;i++) a[i]=a[i+b];
	for(i=0;i<b;i++) a[len-b+i]=temp[i];
	
  }