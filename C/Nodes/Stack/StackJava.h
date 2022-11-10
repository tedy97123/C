#include<stdio.h>
using namespace std;
#ifndef Arrays
    #define Arrays

    template <class T> 
    class Array {
        public:
            T* data;
            int size;
            int top;
            Array();
            Array(int size);
            void Pop();
            void Push();
            void Print();
    };
#endif