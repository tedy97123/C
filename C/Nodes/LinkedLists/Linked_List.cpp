// Linked List : Inserting a node at beginning of the linked list


//                                                                                              Notes
    // - Created a global vairable called Node which is a pointer typ. In the struct we define int = data, and ``` struct Node* next ``` as a pointer to the next node construct. Then we define a new pointer to a varaible
    // called head which is defined in main as NULL. 

    // %d = for interger address , %p = prints address of pointer.

#include<stdlib.h>
#include<stdio.h>

struct Node {
    int data;
    Node* next;
};

 
void Insert( Node** head, int x )
{
    //creation of Node
    struct Node* temp = (Node*)malloc(sizeof(struct Node)); // Create a Node. malloc returns a pointer to the starting address of the memory block. (*Node) is typecasting meaning temp will have the same fuctions and properties available to it as node.
                                                                        //(*temp).data = x; // equivelent too (Node).data = x
                                                                        //                  or                                                               
    temp->data = x;
    temp->next = NULL; 
    // temp is a reference to the node variable and is being destructured to access the varriable in the struct.
    if (*head != NULL) temp -> next = *head; // if head is not NULL then set the temp.next as head.
    *head = temp;
     
}
void Print(Node* head)
{
    //struct Node* temp = head; // collect the address of head and bring it to scope. 1st node address (head)
 
    while(head != NULL) // Traverse the Linked List.
    {
        printf(" %d",head->data);
        head = head->next; // then moveing through the list using the next variable.
    }
    printf("\n");
}

int main() {
    Node* head = NULL; // the list is empty
     int n , i , x ;
    printf(" How many numbers?\n");
    scanf("%d" , &n);
    printf("Enter LIST");
     
    for(int i = 0; i<n;i++)
    {   
       
        printf("Enter LIST");    
        scanf("%d" , &x); 
        Insert(&head,x);
    };
     Print(head); // prints all the Nodes of the linked list (head).
    return 0;
}