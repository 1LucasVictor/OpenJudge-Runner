#include <stdio.h>
struct process_info_t {
	char name[11];
	int time;
	struct process_info_t *next;
};
typedef struct process_info_t ProcessInfo;

int main(void) {
	int num, qt, i, process, living_process;
	ProcessInfo rrs[100001], *p, *prev;

	scanf("%d %d ", &num, &qt);
	for (i = 0; i < num; i++) {
		scanf("%10s %d ", rrs[i].name, &rrs[i].time);
		rrs[i].next = &rrs[i+1];
	}
	rrs[num-1].next = &rrs[0];

	process = 0;
	living_process = num;
	prev = &rrs[num-1];
	for (p = &rrs[0];; p = p->next) {
		p->time -= qt;
		if (p->time > 0) {
			process += qt;
			prev = p;
		} else {
			process += qt + p->time;
			printf("%s %d\n", p->name, process);
			prev->next = p->next;
			if (--living_process <= 0)
				break;
		}
	}
	return 0;
}