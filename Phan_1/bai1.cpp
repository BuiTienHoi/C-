#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    system("chcp 1251>nul");
    int n;
    cout<<"Enter number elements do you want to enter: ";
    cin>>n;
    int matrix[n];
    int index = 1;
    for(int &x :matrix)
    {
        x = index++;
        cout<<x<<" ";
    }
    system("pause>nul");
    return 0;
}
