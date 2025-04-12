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