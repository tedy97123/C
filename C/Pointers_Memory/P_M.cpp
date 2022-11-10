#include <iostream>

void print (int arr[5] , int size){
     for (int i = 0 ; i < size ; i++) {
        std::cout <<  arr[i] << " function call" << std::endl;
     }
};

void print2 (int *arr, int size){
     for (int i = 0 ; i < size ; i++) {
        std::cout << *( arr + i) << " function2 call" << std::endl;
     }
};

int main()
{
     int nums [5] = {0,1,2,3,4};

     std::cout << nums << std::endl;

     // value of the array (a.k.a array by value) is first memory address : 0x41897ff6d0

     //index first item/2nd item
     std::cout << nums [0] << std::endl;

     std::cout << nums [1] << std::endl;

    // this is a example of a derefferenced (a.k.a ) getting the data assigned to the memory address.
     std::cout << *( nums + 0) << std::endl;

     std::cout << *(nums + 1) << std::endl;

     print(nums, sizeof(nums)/sizeof(nums[0])); 

     print2(nums, sizeof(nums)/sizeof(nums[0]));

     // example of how to change value in array
     int x = 5;
     int * xp = &x;
     *xp = 10;

    //Declare array of size 5 containing pointers to type int
     int *nums2 [5]; //DECLARE an array of pointers (40 Bytes) No pointer is assigned yet

     for ( int i = 0; i < 5; i++)
     {
        //We need to INSTANTIATE the pointers at each index
        int p = 5;
        int* placeholder = &p;
        *placeholder = 1000;
        nums2[i] = placeholder;
     }
    for ( int i = 0; i < 5; i++)
     {
        //We need to INSTANTIATE the pointers at each index
        *(nums2[i]) = 1;
     }

     // Pointer to array

     const char text[3][4] = {"The", "Cat" ,"Fat"};

     const char (* pointer) [3][4] = &text; // in this case when using & the array dose not decay, or the array dose not lose any dimensional data. Make sure to match the dimensions of the array when try to find the address of the array of pointers.


     


}