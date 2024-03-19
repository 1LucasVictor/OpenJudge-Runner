#include <stdio.h>
#include <string.h>

#define	HASHTABLEMAX	12000000
#define	EXIST			1
#define	NONE			0

char hashTable[HASHTABLEMAX];

void init(void){
	int i;
	for( i=0; i<HASHTABLEMAX; i++){
		hashTable[i] = NONE;
	}
}

int makehash(char *str){
	int i;
	int hash;
	int code;
	
	i = 0;
	hash = 0;
	code = 0;
	while(str[i] != '\0'){
		hash <<= 2;
		switch(str[i]){
			case 'A':
				code = 0b0001;
				break;
			case 'C':
				code = 0b0010;
				break;
			case 'G':
				code = 0b0100;
				break;
			case 'T':
				code = 0b1000;
				break;
			default:
				break;
		}
		hash += code;
		i++;
	}
	return hash;
}

void find(int hash){
	if(hashTable[hash] == EXIST){
		printf("yes\n");
	}else{
		printf("no\n");
	}
}

void insert(int hash){
	hashTable[hash] = EXIST;
}

int main(void){
	int i;
	int n;
	int hash;
	int length;
	char command[7];
	char str[13];
	
	init();
	scanf("%d",&n);
	for( i=0; i<n; i++){
		scanf("%s",command);
		scanf("%s",str);
		hash = makehash(str);
		if(strcmp(command,"find") == 0){
			find(hash);
		}else if(strcmp(command,"insert") == 0){
			insert(hash);
		}else{
			;
		}
	}
}