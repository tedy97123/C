                                                                                                    // Notes
// Insert data give in the given position of the list. Insert(data,n) < inserting data in the postion specified.

// Head is a gloabl variable available to any function in the file.
// When the progam is started , Main is envoked.The main fuction is stored in the stack with no local variables being instanciated.
// Once the first Insert function is called and data is given a value along with n. (2,1).  a new node is created called temp1. 
// // temp1 is a pointer to the heap(free storage in the application) is the pointer to the addres of where the temp1 is located in the heap.
  
//
//

#include<stdlib.h>
#include<stdio.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head; // AM CAT: GLOBAL

void Insert(int data, int n)
{
    struct Node* temp1 = new Node();

    temp1 -> data = data;

    temp1 -> next = NULL; // Links nodes togehter ( temp1 & next)

    if (n == 1) 
    {

        temp1 -> next = head;  //  set the link field to whatever the existing node is.  

        head = temp1; // set new variable to the newly created node storing user input

        return; // return newly inserted value (head)
    }  

    Node* temp2 = head; // temp2 = head <-- userinput

    for (int i = 0 ; i < n-2; i++)

    {
        temp2 = temp2 -> next;
    }

    temp1 -> next = temp2 -> next;

    temp2 -> next = temp1;
}


void Print()
{
    Node* temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }

    printf("\n");
    
}

int main(){
    head = NULL; // EMPTY LIST ;  
    Insert(2,1); // List : 2 ;  
    Insert(3,2); // List : 2,3  
    Insert(4,1); // List : 4,2,3
    Insert(5,2);// List : 4,5,2,3
    Print();
}