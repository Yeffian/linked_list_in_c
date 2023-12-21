#include "linked_list.h"

int main() {
    linked_list *head = NULL;

    // Append nodes to the list
    ll_push(&head, 1);
    ll_push(&head, 2);
    ll_push(&head, 3);
    ll_push(&head, 4);
    ll_push(&head, 5);
    ll_push(&head, 6);
    ll_push(&head, 7);
    ll_push(&head, 8);

    // Print the linked list
    ll_print(head);

    ll_pop(&head);
    ll_pop(&head);

    ll_print(head);

    return 0;  // Return 0 to indicate successful execution
}