#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>

#define limit_input_char_num (200)
#define limit_dataset_num (10)

//#define DEBUG_BUILD

#ifdef DEBUG_BUILD
# define DEBUG_PRINT(fmt, ...)  printf(fmt, ## __VA_ARGS__)
# define DEBUG_F_PRINT(fp,fmt, ...)  fprintf(fp,fmt, ## __VA_ARGS__)
#else
# define DEBUG_PRINT(fmt, ...)
# define DEBUG_F_PRINT(fmt, ...)
#endif

#ifdef DEBUG_BUILD
FILE *fp;
#endif

void shufflePrint(char str[],int shuffleCharNum);

int main(void) {
	char input[limit_input_char_num+1];

#ifdef DEBUG_BUILD
	fp=fopen("output.txt","w");
#endif

	while(1){
		memset(input,0,sizeof(input));
		int shuffleCount=0;
		//最初の並びを表す文字列
		scanf("%s",input);
		// - だけなら終了
		if(strcmp(input,"-")==0){
			break;
		}
		//シャッフル回数 m
		scanf("%d",&shuffleCount);
		int shuffleSum=0;
		for(int i=0;i<shuffleCount;i++){
			int num=0;
			scanf("%d",&num);
			shuffleSum+=num;
		}
		DEBUG_PRINT("len=%d sum=%d\n",(int)strlen(input),shuffleSum);
		shufflePrint(input,shuffleSum);

	}
#ifdef DEBUG_BUILD
	fclose(fp);
#endif
	return 0;
}

void shufflePrint(char str[],int shuffleCharNum){
	int strLength=strlen(str);
	char strShuffled[strLength+1];
	memset(strShuffled,0,sizeof(strShuffled));
	shuffleCharNum%=strLength;

	DEBUG_PRINT("len=%d shfNum=%d\n",strLength,shuffleCharNum);

	strncpy(strShuffled,str+shuffleCharNum,strLength-shuffleCharNum);
	strncpy(strShuffled+strLength-shuffleCharNum,str,shuffleCharNum);

	DEBUG_PRINT("before %c [%d]\n",*(str+shuffleCharNum),strLength-shuffleCharNum);
	DEBUG_PRINT("after  %c [%d]\n",*str,shuffleCharNum);

	printf("%s\n",strShuffled);
	DEBUG_F_PRINT(fp,"%s\n",strShuffled);

}

