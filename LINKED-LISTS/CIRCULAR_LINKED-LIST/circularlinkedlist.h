#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("Elements:%d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}
//Insert at First
struct Node *insertAtFirst(struct Node *head)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    int data;
    printf("Enter the data that to be inserted First:\n");
    scanf("%d",&data);
    ptr->data = data;
    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head=ptr;
    return head;
}
//Insert at Between
struct Node *insertAtIndex(struct Node *head)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    int data,index;
    printf("Enter the data that to be inserted between:\n");
    scanf("%d",&data);
    printf("Enter the location that to be inserted at index:\n");
    scanf("%d",&index);
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
    printf("Enter the data that to be inserted last:\n");
    scanf("%d",&data);
    ptr->data = data;
    struct Node *p = head;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    return head;
}
//Delete At First
struct Node *deleteAtFirst(struct Node *head)
{
    struct Node *ptr = head;
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = head->next;
    free(head);
    head = ptr->next;
}
//Delete at Between
struct Node *deleteAtIndex(struct Node *head)
{
    int index;
    printf("Enter the index that want to delete:\n");
    scanf("%d",&index);
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
//Delete at End
struct Node *deleteAtEnd(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != head)
    {
        p = p->next;
        q = q->next;
    }
    p->next = head;
    free(q);
    return head;
}