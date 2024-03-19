#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define ARRAY_SIZE 1000000
#define hash1(n) ((n) % ARRAY_SIZE)
#define hash2(n) (1 + (n) % (ARRAY_SIZE - 1))
typedef struct {
        char data[13];
        int empty;
        int delete;
} table;
table hashtable[ARRAY_SIZE];
void Init_hash(void);
int Hash(char*);
int Search(char*);
void Insert(char*);
void Remove(char*);
main()
{
        int i, n;
        char command[7], key[13];
        scanf("%d%*c", &n);
        Init_hash();
        for (i = 0; i < n; i++) {
                scanf("%s %s%*c", command, key);
                switch (command[0]) {
                case 'f':
                        if (Search(key) >= 0){
                                printf("yes\n");
                        } else {
                                printf("no\n");
                        }
                        break;
                case 'i':
                        Insert(key);
                        break;
                case 'd':
                        Remove(key);
                        break;
                }
        }
}
void Init_hash(void)
{
        int i;
        for (i = 0; i < ARRAY_SIZE; i++) {
                hashtable[i].empty = 1;
                hashtable[i].delete = 0;
        }
}
int Hash(char *key)
{
        int i, len = strlen(key), hash = 0;
        for (i = 0; i < len; i++) {
                hash += (int)pow(7, i) * (key[0] - 'A') % 26;
        }
        return hash;
}
int Search(char *key)
{
        int pos = Hash(key),count = 0;
        while (hashtable[pos].delete || !hashtable[pos].empty) {
        		pos = (hash1(pos) + count * hash2(pos)) % ARRAY_SIZE;
                if (!hashtable[pos].delete && !strcmp(key, hashtable[pos].data)) {
                        return pos;
                }
                count++;
        }
        return -1;
}
void Insert(char *key)
{
        int pos = Hash(key), count = 0;
        while (!hashtable[pos].empty || hashtable[pos].delete) {
        		pos = (hash1(pos) + count * hash2(pos)) % ARRAY_SIZE;
                if (hashtable[pos].delete) {
                        break;
                }
                count++;
        }
        strcpy(hashtable[pos].data, key);
        hashtable[pos].empty = 0;
        hashtable[pos].delete = 0;
}
void Remove(char *key)
{
        int pos = Hash(key), count = 0;
        while (hashtable[pos].delete || !hashtable[pos].empty) {
        	pos = (hash1(pos) + count * hash2(pos)) % ARRAY_SIZE;
        	if (!hashtable[pos].delete && !strcmp(key, hashtable[pos].data)) {
                        hashtable[pos].data[0] = '\0';
                        hashtable[pos].empty = 1;
                        hashtable[pos].delete = 1;
                        return;
        }
        count++;
    }
}