#include<stdio.h>

int main(){
int i,j,a,n;
char c,s[5] = {'S','H','C','D','\0'};
static int card[4][13];

scanf("%d\n", &n);
for(i =1;i <=n;i++){
    scanf("%c %d\n",&c,&a);
    for(j=0;j<4;j++){
	if(s[j] == c) card[j][a-1]=1;
	}
    }

for(i=0;i < 4;i++){
    for(j=0; j<13;j++){
	if(card[i][j]==0) printf("%c %d\n",s[i],j+1);
	}
    }
return 0;
}



