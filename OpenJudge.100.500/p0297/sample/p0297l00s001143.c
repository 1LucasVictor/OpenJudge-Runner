#include<stdio.h>
#define LEN 100005
#define MAX 100005
//プロセス（構造体）
typedef struct pp {
	char name[11];
	int t;
}P;
//グローバル変数
P Q[LEN + 1];
int head, tail, n;

//キューが空かどうか
int isEmpty() {
	return head == tail;
}
//キューが満杯かどうか
int isFull() {
	return head == (tail + 1) % MAX;
}
//キューに要素を追加する
void enqueue(P x) {
	if (!(isFull())) {
		Q[tail] = x;
		if (tail + 1 == MAX) {
			tail = 0;
		}
		else {
			tail++;
		}
	}
}
//キューから要素を取り出す
P dequeue() {
	if (!(isEmpty())) {
		P x = Q[head];
		if (head + 1 == MAX) {
			head = 0;
		}
		else {
			head++;
		}
		return x;
	}
}
int main() {
	int elaps = 0;	/*経過した時間の合計*/
	int sum = 0;	/*プロセスの時間の合計*/
	int i, q;		/*プロセス数とクォンタム*/
	P u;

	/*headとtailの初期化*/
	head = tail= 0;

	/*プロセス数とクォンタムの入力*/
	scanf("%d %d", &n, &q);

	/*キューの要素の読み込み*/
	for (i = 0; i < n; i++) {
		scanf("%s", u.name);
		scanf("%d", &u.t);
		enqueue(u);
		/*プロセスの時間を合計*/
		sum += u.t;
	}

	/*elapsがsumと等しくなるまでループ*/
	while (elaps < sum) {
		/*キューから要素を取り出す*/
		u = dequeue();
		/*クォンタムで与えられた時間内に
		処理が完了するとき*/
		if (u.t <= q) {
			/*enqueue()は行わず
			そのプロセスの残り時間分
			elapsに足す*/
			elaps += u.t;
			/*プロセスと経過時間を出力*/
			printf("%s %d\n", u.name, elaps);
		}
		/*完了しないとき*/
		else {
			/*クォンタム分経過時間に足す*/
			elaps += q;
			/*プロセスの残り時間を
			クォンタム分減らす*/
			u.t -= q;
			/*キューの末尾に追加*/
			enqueue(u);
		}
	}

	return 0;
}

