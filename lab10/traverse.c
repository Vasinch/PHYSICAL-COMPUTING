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

// Create a new DataNode
DataNode *createDataNode(char *data) {
    DataNode *node = (DataNode *)malloc(sizeof(DataNode));
    node->data = (char *)malloc(strlen(data) + 1);
    strcpy(node->data, data);
    node->next = NULL;
    return node;
}

// Create a new SinglyLinkedList
SinglyLinkedList *createSinglyLinkedList() {
    SinglyLinkedList *list = (SinglyLinkedList *)malloc(sizeof(SinglyLinkedList));
    list->count = 0;
    list->head = NULL;
    return list;
}

// Insert at last
void insert_last(SinglyLinkedList *list, char *data) {
    DataNode *pNew = createDataNode(data);
    if (list->count == 0) {
        list->head = pNew;
    } else {
        DataNode *ptr = list->head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = pNew;
    }
    list->count++;
}

// Traverse and print data
void traverse(SinglyLinkedList *list) {
    if (list->count == 0) {
        printf("This is an empty list.\n");
        return;
    }
    DataNode *pointer = list->head;
    while (pointer != NULL) {
        printf("%s", pointer->data);
        if (pointer->next != NULL) {
            printf(" -> "); // พิมพ์ลูกศรต่อเมื่อยังไม่ถึงตัวสุดท้าย
        }
        pointer = pointer->next;
    }
    printf("\n"); // ปิดบรรทัดสุดท้ายให้เรียบร้อย
}

int main() {
    SinglyLinkedList *mylist = createSinglyLinkedList();
    int n;
    char condition;
    char data[101];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c: %[^\n]s", &condition, data);

        if (condition == 'F') {
            // insert_front(mylist, data);  // ยังไม่ได้เขียน
        } else if (condition == 'L') {
            insert_last(mylist, data);
        } else if (condition == 'D') {
            // delete_node(mylist); // ยังไม่ได้เขียน
        } else {
            printf("Invalid Condition!\n");
        }
    }

    traverse(mylist);

    // Free memory
    DataNode *current = mylist->head;
    while (current != NULL) {
        free(current->data);
        DataNode *temp = current;
        current = current->next;
        free(temp);
    }
    free(mylist);
    return 0;
}