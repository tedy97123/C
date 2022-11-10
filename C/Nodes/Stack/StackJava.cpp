 
 
#include "StackJava.h"

   
template <class T>            
Array<T>::Array(){};

template <class T>            
Array<T>::Array(int size){
    this->size = size;
    this->data = new T[size];
};

template <class T> 
void Array<T>::Pop(){

};

template <class T> 
void Array<T>::Push(){

};

template <class T> 
void  Array<T>::Print()
{

};


int main()
{
    Array<int> arr = Array<int>(55);
    return 0;
}

     

 