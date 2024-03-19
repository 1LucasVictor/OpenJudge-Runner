#include <stdio.h>


int main(void) {

	// 1_6-B Finding Missing Cards

	int i;

	int cid,num,snum,n;
	char suit;
	int cards[52];
	for(i=0; i<52; i++){
		cards[i] = 0;
	}
	scanf("%d\n",&n);

	for(i=0; i<n; i++){
		scanf("%c %d\n",&suit,&num);
		cid = num-1;
		switch(suit){
			case 'S':	break;
			case 'H':	cid = cid + 13;
					break;
			case 'C':	cid = cid + 26;
					break;
			case 'D':	cid = cid + 39;
					break;
		}
		cards[cid] = 1;
	}

	for(i=0; i<52; i++){
		if(cards[i]==0){
			num = (i%13)+1;
			snum = i/13;
			switch(snum){
				case 0:	suit='S';
					break;
				case 1:	suit='H';
					break;
				case 2:	suit='C';
					break;
				case 3:	suit='D';
					break;
			}
			printf("%c %d\n",suit,num);
		}
	}

        return 0;
}