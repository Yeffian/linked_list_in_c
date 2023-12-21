#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

// print the linked list value
void ll_print(struct node *p) {
    while (p != NULL) {
        printf("%d ", p->value);
        p = p->next;
    }

    printf("\n");
}

// add a new value to the end of the list
void ll_push(struct node **head, int new_value) {
    struct node *new_node = malloc(sizeof(struct node));

    new_node->value = new_value;
    new_node->next = NULL; // The new node will be the last node, so its next is NULL

    // If the list is initially empty, set the head to the new node
    if (*head == NULL) {
        *head = new_node;
        return;
    }

    // Traverse the list to find the last node
    struct node *current = *head;
    while (current->next != NULL) {
        current = current->next;
    }

    // Update the next pointer of the last node to point to the new node
    current->next = new_node;
}

// remove the last value in the list
void ll_pop(struct node **head) {
    // If the node is empty, there's nothing to remove.
    if (*head == NULL) {
        return;
    }

    // If there's only one element in the list, the list will be empty.
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }

    // Go to the second last element in the list.
    struct node *current = *head;
    while (current->next->next != NULL) {
        current = current->next;
    }

    // Remove the second last element and unlink it.
    free(current->next);
    current->next = NULL;
}


typedef struct node linked_list;