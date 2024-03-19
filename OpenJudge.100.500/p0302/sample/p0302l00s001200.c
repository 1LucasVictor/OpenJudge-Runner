#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N_MAX 1000003
#define LENGTH 16

int get_key(char entry[LENGTH]){
	int times = 1, value, key, i;

	key = 0;
	for(i=0; i<strlen(entry); ++i){
		if      ('A' == entry[i]){
			key += 1*times;
		}else if('C' == entry[i]){
			key += 2*times;
		}else if('T' == entry[i]){
			key += 3*times;
		}else if('G' == entry[i]){
			key += 4*times;
		}
		times *= 5;
	}
	return key;
}
int hash1(int key){
	return key % N_MAX;
}
int hash2(int key){
	return 1 + (key % (N_MAX - 1));
}
int hash(int key, int times){
	return (hash1(key) + times*hash2(key)) % N_MAX;
}
int insert(char (*dictionary)[LENGTH], char entry[LENGTH]){
	int entry_key, i = 0, hash_value;

	entry_key = get_key(entry);
	while(1){
		hash_value = hash(entry_key, i);
		if(0 == strcmp(dictionary[hash_value], entry)){
			return 1;
		}else if(0 == strlen(dictionary[hash_value])){
			strcpy(dictionary[hash_value], entry);
			return 0;
		}
		++i;
	}
	return 0;
}
int search(char (*dictionary)[LENGTH], char entry[LENGTH]){
	int entry_key, i=0, hash_value;

	entry_key = get_key(entry);
	while(1){
		hash_value = hash(entry_key, i);
		if(0 == strcmp(dictionary[hash_value], entry)){
			return 1;
		}else if(0 == strlen(dictionary[hash_value])){
			return 0;
		}
		++i;
	}
	return 0;
}

int main(void){
	int n, i;
	char query[8], entry[LENGTH];
	char (*dictionary)[LENGTH];

	dictionary = malloc(sizeof(char)*N_MAX*LENGTH);
	for(i=0; i<N_MAX; ++i)
		dictionary[i][0] = '\0';
	scanf("%d", &n);
	for(i=0; i<n; ++i){
		scanf("%s %s", query, entry);
		if(0 == strcmp(query, "insert")){
			insert(dictionary, entry);
		}else if(0 == strcmp(query, "find")){
			if(search(dictionary, entry)){
				printf("yes\n");
			}else{
				printf("no\n");
			}
		}else{
			continue;
		}
	}
	free(dictionary);
	return 0;
}

