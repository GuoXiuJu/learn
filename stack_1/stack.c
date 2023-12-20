#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define PUBLIC /* empty */
#define PRIVATE static 
#define STACK_SIZE  100

PRIVATE int contents[STACK_SIZE];
PRIVATE int top = 0;

PRIVATE void terminate(const char *message)
{
    printf("%s\n",message);
    exit(EXIT_FAILURE);
}

PUBLIC void print_stack(void)
{
    for(int i = 0;i<top;i++)
        printf("%d",contents[i]);
    printf("\n");
}

PUBLIC void make_empty(void)
{
    top = 0;
}

PUBLIC bool is_empty(void)
{
    return top == 0;
}

PUBLIC bool is_full(void)
{
    return top == STACK_SIZE;
}

PUBLIC void push(int i)
{
    if(is_full())
        terminate("error");
    contents[top++]=i;
}

PUBLIC int pop(void)
{
    if(is_empty())
        terminate("error");
    return contents[--top];
}