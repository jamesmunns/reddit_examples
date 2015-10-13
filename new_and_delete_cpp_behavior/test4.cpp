#include <iostream>

using namespace std;

int main( void )
{
    int* p1 = new int();
    *p1 = 10;

    cout<<p1<<","<<*p1<<endl;

    delete p1;

    cout<<p1<<","<<*p1<<endl;

    p1 = NULL;

    cout<<p1<<","<<*p1<<endl;
    return 0;
}
