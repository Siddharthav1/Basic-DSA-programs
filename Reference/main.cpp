#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int a=10;
    int &r=a;

    cout<<a<<endl;

    cout<<r<<endl;

    r++;
    cout<<a<<endl;

    cout<<r<<endl;

    int b=25;

    r=b;

        cout<<a<<endl;

    cout<<r<<endl;



    return 0;
}
