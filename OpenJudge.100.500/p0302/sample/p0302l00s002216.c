#include <stdio.h>
#include <string.h>

#define	HASHTABLEMAX	16777216

unsigned short hashTable[HASHTABLEMAX];

void init(void){
	unsigned int i;
	for( i=0; i<HASHTABLEMAX; i++){
		hashTable[i] = 0;
	}
}

unsigned int makehash(char *str,unsigned int length){
	unsigned int i;
	unsigned int hash;
	unsigned int code;
	
	hash = 0;
	code = 0;
	for( i=0; i<length; i++){
		switch(str[i]){
			case 'A':
				code = 0b00;
				break;
			case 'C':
				code = 0b01;
				break;
			case 'G':
				code = 0b10;
				break;
			case 'T':
				code = 0b11;
				break;
			default:
				break;
		}
		hash <<= 2;
		hash += code;
	}
	return hash;
}

void find(unsigned int hash,unsigned int length){
	unsigned short lengthBit;
	lengthBit = 1 << (length - 1);
	if(hashTable[hash] & lengthBit){
		printf("yes\n");
	}else{
		printf("no\n");
	}
}

void insert(unsigned int hash,unsigned int length){
	unsigned short lengthBit;
	lengthBit = 1 << (length - 1);
	hashTable[hash] = hashTable[hash] | lengthBit;
}

int main(void){
	unsigned int i;
	unsigned int n;
	unsigned int hash;
	unsigned int length;
	char command[7];
	char str[13];
	
	init();
	scanf("%d",&n);
	for( i=0; i<n; i++){
		scanf("%s",command);
		scanf("%s",str);
		length = strlen(str);
		hash = makehash(str,length);
		if(strcmp(command,"find") == 0){
			find(hash,length);
		}else if(strcmp(command,"insert") == 0){
			insert(hash,length);
		}else{
			;
		}
	}
}