// Stack - Array based implementation

#include<stdio.h>
#define MAX_SIZE 101; // allocating memory

struct Array{
    public:
        int* arr;
        int size;
        int top = 0; // empty stack

        int Top(){
            return arr[top];
        };
        void Push(int x) {
            printf("Current top: %i \n",top);
            printf("Size: %i\n", size);
            if(top == size - 1){
                printf("Error: buffer overflow \n");
                return;
            }
            arr[top]  = x;
            top++;
        };
        void Pop() {
            if (top == 0) {
                printf("Error: no element to pop  \n");
                return;
            } 
            top--;
        };
        void Print(){
            int i;
            printf("Stack: ");
            for ( i =0; i <=top;i++)
                printf("%d", arr[i]);
                printf("\n");
            };

        Array(int size){
            
            printf("This is size from constructor: %i\n",size);
            this->size = size;
            arr = new int[size];
        };
        Array(){};
};

int main(){
    Array T = Array(3);


\
    return 0;
};