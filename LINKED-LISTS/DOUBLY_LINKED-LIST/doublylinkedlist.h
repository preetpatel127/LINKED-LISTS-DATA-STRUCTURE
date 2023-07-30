#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
    struct Node*prev;
};
void linkedlisttraversal(struct Node*head){
    struct Node*ptr=head;
    while(ptr!=NULL){
        printf("Elements:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct Node*insertatFirst(struct Node*head){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    int data;
    printf("Enter the data that to be inserted First:\n");
    scanf("%d",&data);
    ptr->data=data;
    ptr->next=head;
    return ptr;
}
struct Node*insertatIndex(struct Node*head){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    int data,index;
    printf("Enter the data that to be inserted between:\n");
    scanf("%d",&data);
    ptr->data=data;
    printf("Enter the index that you want to insert:\n");
    scanf("%d",&index);
    struct Node*p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct Node*insertatEnd(struct Node*head){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    int data;
    printf("Enter the data that to be inserted last:\n");
    scanf("%d",&data);
    ptr->data=data;
    struct Node*p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
struct Node*deleteatFirst(struct Node*head){
    struct Node*ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct Node*deleteatIndex(struct Node*head){
    int index;
    printf("Enter the index that want to delete:\n");
    scanf("%d",&index);
    struct Node*p=head;
    struct Node*q=head->next;
    for(int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
struct Node*deleteatEnd(struct Node*head){
    struct Node*p=head;
    struct Node*q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}