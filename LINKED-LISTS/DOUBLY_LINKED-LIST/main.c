#include<stdio.h>
#include"doublylinkedlist.h"

void linkedlisttraversal(struct Node*head);

struct Node*insertatFirst(struct Node*head);
struct Node*insertatIndex(struct Node*head);
struct Node*insertatEnd(struct Node*head);
struct Node*deleteatFirst(struct Node*head);
struct Node*deleteatIndex(struct Node*head);
struct Node*deleteatEnd(struct Node*head);

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
    head->prev=NULL;
    head->next = second;
    
    printf("Enter data second:\n");
    scanf("%d", &second->data);
    second->prev=head;
    second->next = third;
    
    printf("Enter data third:\n");
    scanf("%d", &third->data);
    third->prev=second;
    third->next = fourth;
    
    printf("Enter data fourth:\n");
    scanf("%d", &fourth->data);
    fourth->prev=third;
    fourth->next = NULL;
    
    switch(choice){
        case 1:
        linkedlisttraversal(head);
        break;
        case 2:
        head=insertatFirst(head);
        linkedlisttraversal(head);
        break;
        case 3:
        head=insertatIndex(head);
        linkedlisttraversal(head);
        break;
        case 4:
        head=insertatEnd(head);
        linkedlisttraversal(head);
        break;
        case 5:
        head=deleteatFirst(head);
        linkedlisttraversal(head);
        break;
        case 6:
        head=deleteatIndex(head);
        linkedlisttraversal(head);
        break;
        case 7:
        head=deleteatEnd(head);
        linkedlisttraversal(head);
        break;
        default:
        printf("Not Valid Inputs");
    }
    return 0;
}