/*Copyright [2021] [Arghadip]

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.*/

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define CREATE 1
#define UPDATE 2
#define DELETE 3
#define PRINT 4
#define EXIT 5
#define BY_START 1
#define BY_END 2
#define BY_INDEX 3
#define BY_VALUE 4
#define ABORT 5

typedef struct node_val {
	int value;
	struct node_val *next;
} node;

node *start;

void status(int success) {
	printf(success ? "\n> Success\n" : "\n> Failure\n");
}

int items(int print) {
	if (start == NULL) return false;
	node *p = start;
	int count = 0;
	do {
		if (print) {
			if (count == 0) printf("\n");
			printf("Add: %u • Idx: %d • Val: %d\n", p, count, p -> value);
		}
		p = p -> next;
		count++;
	} while (p != start);
	return count;
}

int join_start(node *new) {
	if (start == NULL) start = new;
	node *p = start;
	if (p -> next != NULL)
		while (p -> next != start)
		p = p -> next;
	p -> next = new;
	start = new;
	return true;
}

int by_start(int value, int operation, int items) {
	node *p;
	switch (operation) {
		case CREATE:
			p = (node*) malloc(sizeof(node));
			p -> next = start;
			p -> value = value;
			return join_start(p);
		case UPDATE:
			if (start == NULL) return false;
			p = start;
			p -> value = value;
			return true;
		case DELETE:
			if (start == NULL) return false;
			if (items == 1) {
				free(start);
				start = NULL;
				return true;
			}
			p = start;
			int out = join_start(p -> next);
			free(p);
			return out;
	} return false;
}

int by_end(int value, int operation, int items) {
	node *p, *q;
	switch (operation) {
		case CREATE:
			p = (node*) malloc(sizeof(node));
			if (p == NULL) return false;
			p -> next = NULL;
			p -> value = value;
			if (start == NULL) {
				start = p;
				return true;
			}
			q = start;
			do q = q -> next;
			while (q -> next != start);
			q -> next = p;
			p -> next = start;
			return true;
		case UPDATE:
			if (items == 1) return by_start(value, operation, items);
			p = start;
			do p = p -> next;
			while (p -> next -> next != start);
			p -> next -> value = value;
			return true;
		case DELETE:
			if (items == 1) return by_start(value, operation, items);
			p = start;
			do p = p -> next;
			while (p -> next -> next != start);
			free(p -> next);
			p -> next = start;
			return true;
	} return false;
}

int by_value(int value, int target, int operation, int items) {
	if (start == NULL) return false;
	node *p = start, *q, *r;
	int flag = p -> value;
	int index = 0;
	do {
		if (flag == target) {
			if (index == 0) return by_start(value, CREATE, items);
			switch (operation) {
				case CREATE:
					r = (node*) malloc(sizeof(node));
					r -> next = p;
					r -> value = value;
					q -> next = r;
					return true;
				case UPDATE:
					p -> value = value;
					return true;
				case DELETE:
					q -> next = p -> next;
					free(p);
					return true;
			} return false;
		}
		q = p;
		p = p -> next;
		flag = p -> value;
		index++;
	} while (p -> next != start);
	return (flag == target) ? by_end(value, CREATE, items) : false;
}

int by_index(int value, int target, int operation, int items) {
	if (start == NULL) return false;
	if (target == 0)
		return by_start(value, CREATE, items);
	else if (target == (items - 1))
		return by_end(value, CREATE, items);
	else if (target >= items)
		return false;
	node *p = start, *q, *r;
	int count = 0;
	do {
		if (count == target) {
			switch (operation) {
				case CREATE:
					r = (node*) malloc(sizeof(node));
					r -> next = p;
					r -> value = value;
					q -> next = r;
					return true;
				case UPDATE:
					q -> next -> value = value;
					return true;
				case DELETE:
					q -> next = p -> next;
					free(p);
					return true;
			} return false;
		}
		q = p;
		p = p -> next;
		count++;
	} while (p -> next != start);
	return false;
}

int main() {
	printf("Designed by Arghadip\n");
	while(true) {
		int operation, choice, value, target, count = items(false);
		printf("\nItems in memory: %d\n\n%d) Create\n", count, CREATE);
		if (count > 0) printf("%d) Update\n%d) Delete\n%d) Print\n", UPDATE, DELETE, PRINT);
		printf("%d) Exit\n\nOperation: ", EXIT); scanf("%d", &operation);
		if (!count && (operation == UPDATE || operation == DELETE || operation == PRINT))
			status(false);
		else {
			if (operation == CREATE || operation == UPDATE || operation == DELETE) {
				printf("\n%d) By start\n%d) By end\n", BY_START, BY_END);
				if (count > 0) printf("%d) By index\n%d) By value\n", BY_INDEX, BY_VALUE);
				printf("%d) Abort\n\nOperation: ", ABORT); scanf("%d", &choice);
				if (!count && (choice == BY_INDEX || choice == BY_VALUE))
					status(false);
				else {
					if (choice >= BY_START && choice <= BY_VALUE) {
						if ((choice == BY_INDEX || choice == BY_VALUE)) {
							printf("Target: "); scanf("%d", &target);
						}
						if (operation != DELETE) {
							printf("Value: "); scanf("%d", &value);
						}
					}
					switch (choice) {
						case BY_START: status(by_start(value, operation, count)); break;
						case BY_END: status(by_end(value, operation, count)); break;
						case BY_INDEX: status(by_index(value, target, operation, count)); break;
						case BY_VALUE: status(by_value(value, target, operation, count)); break;
						case ABORT: status(true); break;
						default: status(false); break;
					}
				}
			} else switch (operation) {
				case PRINT: status(items(true)); break;
				case EXIT: status(true); exit(false); break;
				default: status(false); break;
			}
		}
	} return false;
}