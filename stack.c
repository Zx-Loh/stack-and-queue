#include <stdio.h>


typedef struct list
{

    int value;
    struct list *next;

} list;


int main(void)
{
    char option;

    while (option != 'q')
    {
        printf("Select an option: \n");
        scanf("%c", &option);
    }
}