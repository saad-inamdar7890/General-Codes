#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node* prime(int x, struct Node *tail)
{
    struct Node *value = (struct Node *)malloc(sizeof(struct Node));
    value->data = x;
    tail->next = value;
    value-> next =NULL;
    return value;

};


int input()
{
    int x;
    printf("Write the Range of Prime NuMBER YOU wnt to Check \n");
    scanf("%d\n", &x);
    return x;
};
   
void display(struct Node *prac)
{
	while(prac->next != NULL)
	{
		printf( "%d \t",prac->data);
		prac = prac->next;
	}
}

int main()
{
int range;
struct Node *head= (struct Node *)malloc(sizeof(struct Node));
head->data = 2;
struct Node *copy= (struct Node *)malloc(sizeof(struct Node));

struct Node *tail = (struct Node *)malloc(sizeof(struct Node));
tail = head;
range = input();
for(int i = 3 ; i <= range ; i++)
{
    for (copy = head ; copy != NULL; copy = copy->next )
    {
        if(i % copy->data == 0 )
        break;
        if( copy->next == NULL)
        {
            tail = prime(i , copy);
        }
    }
}
display(head);
return 0 ;
}