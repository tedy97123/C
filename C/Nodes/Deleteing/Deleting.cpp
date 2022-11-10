#include<stdlib.h>
#include<stdio.h>

struct Node 
{
    int data;
    int i;
    struct Node *next;
};

struct Node* head;
void Insert(int data)
{
    struct Node* num = new Node();
    num-> data = data;
    num-> next = head;
    head = num;

}

void Print( )
{
    struct Node* list = head;
    while (list != NULL)
    {   
    printf( " ");
    printf(" %d",list->data);
    list = list->next; 
        if ( list == NULL)
        {
            break;
        }
    }
}

void Delete(int n)
{
    struct Node* num = head;

    if(num != NULL){
        while (n ==1){
            head = num->next;
            free(num);   
            return;
        }
      
    }
    else{
        if (num == NULL){
            printf("head is empty look at Insert");
        }
    }
     /* if(n == 1)
        {
            head = num->next;
            free(num);   
            return;
        }
        if (head == NULL){
          printf("this is a head problem");
            
        } */
    int i;
    for(i=0;i<n-2;i++)
      num=num->next;
         
   
Node* num2 = num -> next;
num -> next = num2 -> next;
free(num2);
}    

int main()
{
    head = NULL;
    Insert(2);
    Insert(4);
    Insert(6);;
    Insert(5);
    Print();
    int n;
    printf("\n Enter a position \n"); 
    scanf("%d", &n);
    Delete(n);
    printf("\nNewList:"); 
    Print( );
}