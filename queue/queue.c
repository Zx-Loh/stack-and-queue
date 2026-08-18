#include <stdio.h>
#include <stdlib.h>

// Linked list struct definition
// For purposes of this queue implementation, we will be treating the head as the front of the queue, and the tail as the back of the queue
typedef struct list
{
    int value;
    struct list *next;
} list;


void enqueue(int value, list **head);
// void pop(list **head);
int empty(list *head);
void print_queue(list *head);


int main(void)
{
    int option = 1;
 
    // Initialize the head and tail pointers of the linked list
    list *head = NULL;
    list *tail = NULL;
 
    // Allows user to select 1 of 5 options
    while (option != 0)
    {
        printf("0. Exit the program\n");
        printf("1. Enqueue: Adds a value to the rear of the queue.\n");
        printf("2. Dequeue: Removes and returns the value at the front of the queue.\n");
        printf("3. Print queue: Displays contents of queue from the front to rear.\n");
        printf("4. Empty: Returns 1 if the queue is empty, 0 otherwise.\n");
        printf("Select an option by typing its number: ");
        scanf(" %i", &option);
        printf("\n");

        switch (option)
        {
            case 1:
                int value;
                printf("Please enter the value you wish to add: ");
                scanf(" %i", &value);
                printf("\n");
                enqueue(value, &head);
                break;

            // case 2:
            //     pop(&head);
            //     break;
            
            case 3:
                print_queue(head);
                break;

            case 4:
                int check = empty(head);
                printf(" %i\n\n", check);
        }
    }
    return 0;
}

// Adds value to the top of the stack
void enqueue(int value, list **head)
{
    // Check if this is the first item to be added in the list
    if (*head == NULL)
    {
        list *n = malloc(sizeof(list));
        n -> value = value;
        n -> next = NULL;

        *head = n;

        return;
    }

    // Otherwise, go to end of list and add new node
    list *ptr = *head;

    while (ptr -> next != NULL)
    {
        ptr = ptr -> next;
    }

    list *n = malloc(sizeof(list));
    n -> value = value;
    n -> next = NULL;

    // Set current last node next pointer to new node
    ptr -> next = n;
}

// // Removes and returns the value at the top of the stack
// void pop(list **head)
// {
//     list *ptr = *head;

//     // Print value at the top of stack
//     printf("%i\n\n", ptr -> value);

//     // Remove the list node at the top of the stack
//     *head = ptr -> next;
//     free(ptr);
// }


// Returns 1 if queue is empty, 0 otherwise
int empty(list *head)
{
    if (head == NULL)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}


// Displays the content of the queue from top to bottom
void print_queue(list *head)
{
    list *ptr = head;
 
    // Iterate through the linked list while ptr is not NULL
    while (ptr != NULL)
    {
        // Print out the value of current list node
        printf("%i\n", ptr -> value);

        // Set ptr to next list node
        ptr = ptr -> next;
    }

    printf("\n");
}