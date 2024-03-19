#include <stdio.h>
#include <string.h>
#define M 1000003
#define L 13
 
void insert(char* val);
int find(char* val);
int h(int, int);
int getNumber(char);
char hashTable[M][L];
char hashIsUsed[M];
int codes[4][L];
 
int main(){
 
int n;
int i,j,p;
char val[L], com[7];
	
for(i=0; i<4; i++){
	p=1;
for(j=0; j<L; j++){
	codes[i][j] = i * p;
	p*=4;
}
}
 
scanf("%d",&n);
 
for(i=0; i<n; i++){
scanf("%s %s",com,val);
if(com[0] == 'i'){
insert(val);
}else if(com[0] == 'f'){
if(find(val) == 1){
    printf("yes\n");
}else{
    printf("no\n");
}
}
}
 
return 0;
 
}
 
void insert(char* val){

int code = 0;
int p = 1;
int key;
int i, len;
     
for(i=0, len=strlen(val); i<len; i++){
code += codes[getNumber(*(val+i))][i];
}
 
for(i=0; ;i++){
key = h(code,i);
if(hashIsUsed[key] != 1){
    strcpy(hashTable[key],val);
    hashIsUsed[key] = 1;
return;
}
}
 
}
 
int find(char* val){
 
int code = 0;
int p = 1;
int key;
int i, len;
     
for(i=0, len=strlen(val); i<len; i++){
code += codes[getNumber(*(val+i))][i];
}
 
for(i=0; ;i++){
key = h(code,i);
if(hashIsUsed[key] != 1){
return 0;
}else if(!strcmp(hashTable[key],val)){
return 1;
}
}
 
return 0;
 
}
 
int h(int code, int i){
return ((code % M) + i * (1 + (code % (M-1)))) % M;
}
 
int getNumber(char val){
 
if(val == 'A') return 0;
if(val == 'C') return 1;
if(val == 'G') return 2;
if(val == 'T') return 3;
 
return -1;
 
}