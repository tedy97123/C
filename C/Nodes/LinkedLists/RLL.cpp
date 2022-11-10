#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int data)
    {
        this->  data = data;
        next = NULL;
    }
};

struct Node* head; 

class LinkedList{
    public:
        Node* head;
        LinkedList() { head = NULL; }

        void insert(int data){
            struct Node* nums = new Node(data);
            nums->next = head;
            head = nums;
        };

        Node* reverse(Node* head) 
        {
            struct Node* reverse = head;

            if (head == NULL || head->next == NULL)
            {
                return head;
            }

            /* reverse the rest list and put
            the first element at the end */
            struct Node* rest = this->reverse(head->next);
            head->next->next = head;

            /* tricky step -- see the diagram */
            head->next = NULL;

            /* fix the head pointer */
            return rest;
        };
 
    void print()
    {
        struct Node* list = head;
        while  (list != NULL){
            printf(" ");
            printf("%d" , list->data);
                list = list->next;
        }
        
    };
};


int main()
{
   LinkedList numbers; 
/* Node* head = NULL;
    
    int i, n , x;
    printf(" Set the length of you list \n");
    scanf("%d", &n);
    printf("Enter List  \n");
    scanf("%d", &x);
    int x1 = (sizeof(x) + 1 );
    if ( n  ==  x1 ) 
    {
        printf(" \n perfect!  ");
        for(int i = 0; i<x;x++)
          numbers.insert(&head,x); 
          
    printf(" \n Here is your list:");
    numbers.print(head);   
    }
        if ( n  < x1   )
        return printf("entered number(n) is larger than the list length(x)");
        
        if ( n  > x1 )
        return printf("entered number(n) is smaller than the list length(x) ");
        
    return 0;
  }; */
    numbers.insert(1);
    numbers.insert(2);
    numbers.insert(3);
    numbers.insert(4);
    numbers.insert(5);
    cout << "Given linked list\n";
    numbers.print();

    numbers.head = numbers.reverse(numbers.head);

    cout << "\n Reversed linked list \n";
    numbers.print();
    return 0;


};

     