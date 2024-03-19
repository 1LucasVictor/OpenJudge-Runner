//8 Queens Problem
#include <stdio.h>

#define GRID_NUM 8
#define FREE -1
#define NOT_FREE 1

void printBoard(void);
void recursive(int);

//pos[]  Left  Naname
//neg[]  Right Naname
int ROW[GRID_NUM],COLUMN[GRID_NUM],pos[2*GRID_NUM-1],neg[2*GRID_NUM-1];
//exist?
int flag[GRID_NUM][GRID_NUM];

int main(){
	int k,i,j;
	int row,column;


	//init
	for(i=0;i<GRID_NUM;i++){
		ROW[i]=FREE;
		COLUMN[i]=FREE;
	}
	for(i=0;i<2*GRID_NUM-1;i++){
		pos[i]=FREE;
		neg[i]=FREE;
	}
	for(i=0;i<GRID_NUM;i++){
		for(j=0;j<GRID_NUM;j++){
			flag[i][j]=-1;
		}
	}

	//input
	scanf("%d",&k);

	for(i=0;i<k;i++){
		scanf("%d %d",&row,&column);
		flag[row][column]=1;
	}

	recursive(0);

	return 0;

}


void printBoard(){
	int i,j;
	for(i=0;i<GRID_NUM;i++){
		for(j=0;j<GRID_NUM;j++){
			if(flag[i][j]==1){
				if(ROW[i]!=j)return;
			}
		}
	}

	for(i=0;i<GRID_NUM;i++){
		for(j=0;j<GRID_NUM;j++){
			if(ROW[i]==j){
				printf("Q");
			}
			else{
				printf(".");
			}
		}
		printf("\n");
	}
}


void recursive(int num){
	int i,j;
	//queens put succes
	if(num==GRID_NUM){
		printBoard();
		return;
	}
	//(i,j) do not put
	for(i=0;i<GRID_NUM;i++){
		if(NOT_FREE==COLUMN[i] || NOT_FREE==pos[num+i] || NOT_FREE==neg[num-i+GRID_NUM-1]){
			continue;
		}
		//(i,j) put
		ROW[num]=i;
		COLUMN[i]=pos[num+i]=neg[num-i+GRID_NUM-1]=NOT_FREE;
		//next row
		recursive(num+1);
		//(i,j) remove
		ROW[num]=COLUMN[i]=pos[num+i]=neg[num-i+GRID_NUM-1]=FREE;
	}
	//queens put fail
}

