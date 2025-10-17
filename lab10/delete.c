#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DataNode {
    char *data;
    struct DataNode *next;
} DataNode;

typedef struct SinglyLinkedList {
    unsigned int count;
    DataNode *head;
} SinglyLinkedList;

DataNode *createDataNode(char *data) {
    DataNode *node = malloc(sizeof(DataNode));
    node->data = malloc(strlen(data) + 1);
    strcpy(node->data, data);
    node->next = NULL;
    return node;
}

SinglyLinkedList *createSinglyLinkedList() {
    SinglyLinkedList *list = malloc(sizeof(SinglyLinkedList));
    list->count = 0;
    list->head = NULL;
    return list;
}

void traverse(SinglyLinkedList *list) {
    if (!list->count) {
        printf("This is an empty list.\n");
        return;
    }
    DataNode *p = list->head;
    while (p) {
        printf("%s", p->data);
        if (p->next) printf(" -> ");
        p = p->next;
    }
    printf("\n");
}

void insert_last(SinglyLinkedList *list, char *data) {
    DataNode *node = createDataNode(data);
    if (!list->count) list->head = node;
    else {
        DataNode *p = list->head;
        while (p->next) p = p->next;
        p->next = node;
    }
    list->count++;
}

void insert_front(SinglyLinkedList *list, char *data) {
    DataNode *node = createDataNode(data);
    node->next = list->head;
    list->head = node;
    list->count++;
}

void delete(SinglyLinkedList *list, char *data) {
    DataNode *cur = list->head, *prev = NULL;
    if (!cur) {
        printf("Cannot delete, %s does not exist.\n", data);
        return;
    }
    while (cur && strcmp(cur->data, data) != 0) {
        prev = cur;
        cur = cur->next;
    }
    if (!cur) {
        printf("Cannot delete, %s does not exist.\n", data);
        return;
    }
    if (!prev) list->head = cur->next;
    else prev->next = cur->next;
    free(cur->data);
    free(cur);
    list->count--;
}

int main() {
    SinglyLinkedList *list = createSinglyLinkedList();
    int n;
    char c, data[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c: %[^\n]s", &c, data);
        if (c == 'F') insert_front(list, data);
        else if (c == 'L') insert_last(list, data);
        else if (c == 'D') delete(list, data);
        else printf("Invalid Condition!\n");
    }

    traverse(list);
    DataNode *cur = list->head;
    while (cur) {
        free(cur->data);
        DataNode *temp = cur;
        cur = cur->next;
        free(temp);
    }
    free(list);
    return 0;
}