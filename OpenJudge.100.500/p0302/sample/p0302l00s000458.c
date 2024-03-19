#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define SIZE 100000

struct WORD {
	char value[15];
	struct WORD *next;
};

struct WORD* HashTable[SIZE];	//default: all NULL

int HashFunc(char s[]) {
	long long hash = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		hash += s[i] * (i + 1);
	}
	return (int)(hash * 13 % SIZE);
}

void AddWord(char s[], int hashNum) {
	struct WORD* newWord = (struct WORD*)malloc(sizeof(struct WORD));
	strcpy(newWord->value, s);
	newWord->next = NULL;
	if (HashTable[hashNum] == NULL) HashTable[hashNum] = newWord;
	else {
		newWord->next = HashTable[hashNum];
		HashTable[hashNum] = newWord;
	}
}

void Insert(char s[]) {
	int hash = HashFunc(s);
	AddWord(s, hash);
}

void Find(char s[]) {
	int hash = HashFunc(s);
	struct WORD* pos;
	for (pos = HashTable[hash]; pos != NULL; pos = pos->next) {
		if (!strcmp(s, pos->value)) {
			printf("yes\n");
			return;
		}
	}
	printf("no\n");
	return;
}

int main() {
	int n;
	char command[10], value[15];
	for (int i = 0; i < SIZE; i++) {
		HashTable[i] = NULL;
	}
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s %s", command, value);
		if (!strcmp(command, "insert")) Insert(value);
		else if (!strcmp(command, "find")) Find(value);
	}

	return 0;
}
