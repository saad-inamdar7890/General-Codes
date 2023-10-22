#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if(ptr->top == -1)
    return 1;
}

int isFull( struct stack *ptr)
{
    if(ptr->top== ptr->size -1)
    return 1;

}
struct stack *push(struct stack *sp)
{
    int value;
printf("Write the push value");
scanf("%d",&value);
sp->arr[sp->top++] = value;
return sp;
}

struct stack *pop(struct stack *sp)
{
    int value;
        printf("The value has %d has been removed",sp->top);
    sp->top --;
    printf("write the dtaa if to stop deletion -0001 \n");
    scanf("%d",&value);
    if(value != -0001){
    
sp->arr[sp->top++] = value;
return (sp);
}
}
/*void input(struct Node *practice)
{
    printf("write the dtaa if to stop write -0001 \n");
    scanf("%d",&practice->data);
    if(practice->data == -0001)
    practice->next = NULL;
    else{
        practice->next =  (struct Node *)malloc(sizeof(struct Node));
        input(practice->next);
    }
}*/

int main()
{
    struct stack *s =  (struct stack*)malloc(s->size* sizeof(struct stack));
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size* sizeof(int));
    printf("Write the input value of stack");
    push(s);
    printf("Write -1 to delete from stack");
    if( getchar() == '1')
    push(s);
    return 0;
}











