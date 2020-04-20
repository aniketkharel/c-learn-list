//
// Created by aniket on 4/11/2020.
//
#include "iostream"
using namespace std;
class TestClass {
private:
    int number;
    int cost;
public:
    void getData(int a, int b);

    void putData(void){
        cout << number;
        cout << cost;
    }
    friend int wowFrie(TestClass testClass);
};

//notice three objects created as the class are created, three objects are created
//usually a bad practise to do so
//class ObjectClass {
//private:
//    int number;
//    float cost;
//public:
//    void getData(int a, int b);
//    void putData(void);
//}x,y,z;

//function definitions can be either inside the class itself or outside the class the difference is that the definition inside the class are treated as inline function which will bear all the limitations of inline fucntions
void TestClass::getData(int a, int b) {
    number = a;
    cost = b;
}

///friend fucntion member doesnt need to be refered with scope opeartor
int wowFrie(TestClass testClass){
    return testClass.number+testClass.cost;
}

//in main class
//TestClass x;
//x.getData(100,400)