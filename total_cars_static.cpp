//This code demonstrates the use of static data members in C++ using a class that keeps track of the total number of cars created. It's a simple OOP example for understanding how static variables behave across multiple objects.

#include<iostream>
using namespace std;
class cars
{
    public:
    static int totalcars;
     cars()
    {
         totalcars++;
    }
};
int cars::totalcars=0;
int main()
{
    cars c1,c2,c3,c4;
    cout<<"Total Cars are : "<<cars::totalcars;
}
