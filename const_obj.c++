#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    A(int num)
    {
        cout<<"default param constr called"<<endl;
    }
    void set(int num)
    {
        a=num;
        cout<<"function a: "<<a<<endl;
    }
    void display() const    //you can make function constant if  you don't want to modify the data member of class in that function.
    {
        cout<<"display a: "<<a<<endl;
    }
};
int main()
{
    const A obj(5);
    // obj.set(5); // const obj cannot call non constant function
    obj.display();  //constant funtion is called by non-constant obj

    return 0;
}