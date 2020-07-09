/*  FriendClassDemo.cpp || Nick Hofmann 7/8/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    This program will .

*/
#include <iostream>
using namespace std;

class MyClass1
{
    friend class MyClass2;  // MyClass2 is a friend of MyClass1.

private:
    int x;

public:
    MyClass1(int a)
    {
        x = a;
    }
};

class MyClass2
{
public:
    void showData(MyClass1 obj)
    {
        cout << "x value is: " << obj.x;
    }
};

int main()
{

    MyClass1 obj1(5);
    MyClass2 obj2;
    obj2.showData(obj1);

    return 0;
}  // End of main method.