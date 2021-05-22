#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct list {
	struct node *head;
	struct node *tail;
};

struct list* init() {
	struct list *l = (struct list*)malloc(sizeof(struct list));
	l->head = NULL;
	l->tail = NULL;
	return l;
}

void push( struct list *l, int data) {
	struct node *tmp = (struct node*)malloc(sizeof(struct node));
	tmp->data = data;
	if (l->head == NULL) {
		l->head = tmp;
		l->tail = l->head;
	} else {
		tmp->next = l->head;
		l->head = tmp;
	}
}

int pop( struct list *l ) {
	if ( l->head != NULL ) {
		struct node *tmp = l->head;
		int tmp_data = tmp->data;
		if ( l->head->next != NULL ) {
			l->head = l->head->next;
		} else {
			l->head = NULL;
		}
		free(tmp);
		tmp = NULL;
		return tmp_data;
	} else {
		return -1;
	}
}

void print( struct list *l ) {
	struct node *p = l->head;
	while (p != NULL) {
		printf("%d\n", p->data);
		p = p->next;
	}
}

main() {
	struct list *l = init();

	push(l, 1);
	push(l, 2);
	push(l, 3);

	printf("HEAD: %d\n", pop(l) );
	printf("HEAD: %d\n", pop(l) );
	printf("HEAD: %d\n", pop(l) );
	printf("HEAD: %d\n", pop(l) );
	printf("HEAD: %d\n", pop(l) );
	printf("HEAD: %d\n", pop(l) );

	return 0;
}
