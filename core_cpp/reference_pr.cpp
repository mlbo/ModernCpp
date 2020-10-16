#include<iostream>
using namespace std;

int main()
{ 
    int num = 42;
    int& ref = num;
    const int& kRef = num;
    ref = 0;
    // kRef = 1;
    cout<<ref<<" "<<num<<" "<<kRef<<endl;
    num = 43;
    cout<<ref<<" "<<num<<" "<<kRef<<endl;

    return 0;
}