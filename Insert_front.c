#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* insert_front(struct node* front, int val){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = front;
    front = temp;
    return front;
}
struct node* display(struct node* front){
    struct node *t1=front;
    while(t1 !=NULL){
        printf("%d ",t1->data);
        t1=t1->next;
    }
    printf("\n");
    return t1;
}
void main(){
    int val,choice;
    struct node* first = NULL;
    printf("--------* select the linked list *--------\n");
    printf("1.insert at front\n");
    printf("2.display the value\n");
    for(;;){
        printf("Enter you choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter your val: ");
            scanf("%d",&val);
            first=insert_front(first, val);
            break;
            case 2:
            first=display(first);
            break;
            default :
            printf("enter correct number!!!!!!!!!!!\n");
            break;
        }
    }
}