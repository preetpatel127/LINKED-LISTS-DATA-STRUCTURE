#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Elements:%d\n", ptr->data);
        ptr = ptr->next;
    }
}
//Insert at First
struct Node *insertAtFirst(struct Node *head)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    int data;
    printf("Enter the data that to be inserted First:\n");
    scanf("%d", &data);
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
//Insert at Between
struct Node *insertAtIndex(struct Node *head)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    int data,index;
    printf("Enter the data that to be inserted Between:\n");
    scanf("%d", &data);
    ptr->data = data;
    printf("Enter the location after which you want to insert:\n");
    scanf("%d", &index);
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
//Insert at End
struct Node *insertAtEnd(struct Node *head)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    int data;
    printf("Enter the data that to be inserted Last:\n");
    scanf("%d", &data);
    ptr->data = data;
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
//Delete At First
struct Node *deleteAtFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
//Delete At Between
struct Node *deleteAtIndex(struct Node *head)
{
    int index;
    struct Node *p = head;
    struct Node *q = head->next;
    printf("Enter the index which you are deleting:\n");
    scanf("%d",&index);
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
//Delete At End
struct Node *deleteAtEnd(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}