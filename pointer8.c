#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the linked list
struct Node {
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Recursive function to copy a linked list
struct Node* copyLinkedListRecursive(struct Node* head) {
    if (head == NULL) {
        return NULL; // Base case: empty list
    }

    // Create a new node with the same data as the current head
    struct Node* newHead = createNode(head->data);

    // Recursively copy the rest of the list and attach it to the new node
    newHead->next = copyLinkedListRecursive(head->next);

    return newHead;
}


// Function to print the linked list (for testing)
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    // Create the original linked list
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);

    printf("Original List: ");
    printList(head);

    // Copy the linked list
    struct Node* copiedHead = copyLinkedListRecursive(head);

    printf("Copied List: ");
    printList(copiedHead);


    // Free the memory (important to prevent memory leaks!)
    while(head != NULL) {
        struct Node *temp = head;
        head = head->next;
        free(temp);
    }

    while(copiedHead != NULL) {
        struct Node *temp = copiedHead;
        copiedHead = copiedHead->next;
        free(temp);
    }

    return 0;
}