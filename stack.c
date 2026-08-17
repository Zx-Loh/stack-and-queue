#include <stdio.h>

// Linked list struct definition
// For purposes of this stack implementation, we will consider the head of the linked list as the top of the stack
// and the tail as the bottom of the stack
typedef struct list
{
    int value;
    struct list *next;
} list;


void push(int value);
void pop();
void peek();
int empty();
void print_stack();


int main(void)
{
    int option;

    // Allows user to select 1 of 5 option
    while (option != 0)
    {
        printf("1. Push: Adds a value to the top of the stack.\n");
        printf("2. Pop: Removes and returns the value at the top of the stack.\n");
        printf("3. Peek: Returns the top value without removing it.\n");
        printf("4. Empty: Returns 1 if the stack is empty, 0 otherwise.\n");
        printf("5. Print stack: Displays the stack contents from top to bottom.\n");
        printf("Select an option by typing its number: ");
        scanf(" %i", &option);

        switch (option)
        {
            case 1:
                int value;
                printf("Please enter the value you wish to add: ");
                scanf(" %i", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;
            
            case 4:
                empty();
                break;
        
            case 5:
                print_stack();
                break;
        }
    }

    return 0;
}

// Adds value to the top of the stack
void push(int value)
{
    
}


// Removes and returns the value at the top of the stack
void pop()
{
    
}


// Returns the value at the top of the stack without removing it
void peek()
{
    
}


// Returns 1 if stack is empty, 0 otherwise
int empty()
{
    
}


// Displays the content of the whole stack from top to bottom
void print_stack()
{
    
}