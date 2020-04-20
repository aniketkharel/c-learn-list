//
// Created by aniket on 4/11/2020.
//

/*
#include "iostream"
#include "string"
#include "ctype.h"

using namespace std;

int main() {

    */
/*   int arr[10]={1,0,12,34,65,7,6,78,89,98};
       int  i,num,*pointer;
       //assign the base address to the our pointer
       pointer = arr;
       //now we perform linear search with the help of our pointer
       cout << "Pointer values are  : " << *pointer << "\n";
       cout << "Enter the element to be searched : ";
       cin >> num;
       for(i=0;i<=10;i++){
           if(*pointer==num){
               cout << "Present in the array \n";
               break;
           } else if (i==9){
               cout << "Not Present in the array \n";
               pointer++;
           }
       }*//*


    // arrays of pointer helps to reduce memory consumption

    int i = 0;
    char *pointer[10] = {
            "books",
            "television",
            "computers",
            "sports"
    };
    char str[25];
    cout << "Enter the lesiure pursuit of yours : \n";
    cin >> str;
    for (i = 0; i < 4; i++) {
        if (!strcmp(str, reinterpret_cast<const char *>(*pointer[i]))) {

        }
    }
}*/
