#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char *data;
    int index;
    struct Node *next;
} Node;

typedef struct {
    unsigned int count;
    Node *head;
} LinkList;

LinkList *createList() {
    LinkList *list = malloc(sizeof(LinkList));
    list->count = 0;
    list->head = NULL;
    return list;
}

Node *createNode(char *data, int index) {
    Node *node = malloc(sizeof(Node));
    node->data = malloc(strlen(data) + 1);
    strcpy(node->data, data);
    node->index = index;
    node->next = NULL;
    return node;
}

void insert(LinkList *list, char *data) {
    Node *node = createNode(data, list->count++);
    if (!list->head) list->head = node;
    else {
        Node *p = list->head;
        while (p->next) p = p->next;
        p->next = node;
    }
}

void find(LinkList *list, int index) {
    Node *p = list->head;
    int len = list->count;
    while (p) {
        if (p->index == index || p->index - len == index) {
            printf("%s", p->data);
            return;
        }
        p = p->next;
    }
    printf("Error");
}

int main() {
    LinkList *list = createList();
    char *input = malloc(21), *temp;
    int index;

    while (1) {
        scanf("%s", input);
        if (strcmp(input, "Last") == 0) break;
        temp = malloc(strlen(input) + 1);
        strcpy(temp, input);
        insert(list, temp);
    }

    scanf("%d", &index);
    find(list, index);

    Node *p = list->head;
    while (p) {
        free(p->data);
        Node *t = p;
        p = p->next;
        free(t);
    }

    free(input);
    free(list);
}