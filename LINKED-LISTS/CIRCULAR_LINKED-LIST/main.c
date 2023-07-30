#include<stdio.h>
#include"circularlinkedlist.h"
void linkedListTraversal(struct Node*head);

struct Node*insertAtFirst(struct Node*head);
struct Node*insertAtIndex(struct Node*head);
struct Node*insertAtEnd(struct Node*head);
struct Node*deleteAtFirst(struct Node*head);
struct Node*deleteAtIndex(struct Node*head);
struct Node*deleteAtEnd(struct Node*head);

int main(){
    
    int choice;
    printf("1]Display\n2]Insert at Beginning\n3]Insert at Index\n4]Insert at End\n5]Delete at Beginning\n6]Delete at Index\n7]Delete at End\n");
    printf("Enter the choice:\n");
    scanf("%d",&choice);
    
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    
    printf("Enter data first:\n");
    scanf("%d", &head->data);
    head->next = second;
    
    printf("Enter data second:\n");
    scanf("%d", &second->data);
    second->next = third;
    
    printf("Enter data third:\n");
    scanf("%d", &third->data);
    third->next = fourth;
    
    printf("Enter data fourth:\n");
    scanf("%d", &fourth->data);
    fourth->next = head;
    
    switch(choice){
        case 1:
        linkedListTraversal(head);
        break;
        case 2:
        head=insertAtFirst(head);
        linkedListTraversal(head);
        break;
        case 3:
        head=insertAtIndex(head);
        linkedListTraversal(head);
        break;
        case 4:
        head=insertAtEnd(head);
        linkedListTraversal(head);
        break;
        case 5:
        head=deleteAtFirst(head);
        linkedListTraversal(head);
        break;
        case 6:
        head=deleteAtIndex(head);
        linkedListTraversal(head);
        break;
        case 7:
        head=deleteAtEnd(head);
        linkedListTraversal(head);
        break;
        default:
        printf("Not Valid Inputs");
    }
    return 0;
}