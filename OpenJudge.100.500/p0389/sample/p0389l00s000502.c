#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int swap(char [],char [],int);
int move(int,int,char []);
void unit(int,char [],char [],int);

int main(void){

	int shuffle,i,j,len,time,k,count,loop;
	char card[200],temp[200],temp2[1];

	for(loop=0;loop>-1;loop++){
		scanf("%s",card);
		if(card[0]=='-')
			break;
		scanf("%d",&time);
		for(k=0;k<time;k++){
			scanf("%d",&shuffle);
			count=swap(temp,card,shuffle);
			len=strlen(card);
			j=move(len,count,card);
			i=j;
			unit(len,card,temp,i);
		}
		printf("%s\n",card);
	}
	return 0;
}

int swap(char temp[],char card[],int shuffle){

	int i;
	for(i=0;i<shuffle;i++)
		temp[i]=card[i];
	temp[i]='\0';
	return i;
}

int move(int len,int count,char card[]){
	int i,j;
	char temp[1];
	
	j=0;
	for(i=count;i<len;i++){//後ろを前に持ってくる//
		temp[0]=card[i];
		card[j]=temp[0];
		j++;
	}
	return j;
}

void unit(int len,char card[],char temp[],int i){

	int j;
	for(j=0;i<len;i++){
		card[i]=temp[j];
		j++;
	}
}