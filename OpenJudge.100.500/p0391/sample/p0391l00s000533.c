#include<stdio.h>
#include<string.h>
#define MAX 1001


void swap(char str[],int a,int b){
char temp;
temp=str[a];
str[a]=str[b];
str[b]=temp;

return;
}



int main(){
char str[MAX];
int n,i,x,y,j;
char com[8];
char temp[MAX];

scanf("%s",str);
scanf("%d",&n);

for(i=0;i<n;i++){
 scanf("%s",com);
 scanf("%d %d",&x,&y);
 switch(com[2]){
  case 'i':
           for(j=x;j<=y;j++)printf("%c",str[j]);
           printf("\n");
           break;

  case 'p':
           scanf("%s",temp);
           for(j=x;j<=y;j++)str[j]=temp[j-x];
           break;

  case 'v':
           for(j=x;j<=(y+x)/2;j++)swap(str,j,y-(j-x));
           break;
 }
}

return 0;
}
