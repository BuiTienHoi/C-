#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
    system("chcp 1251>null");
    int n;
    cout<<"How mamy number matrix do you want to enter: ";
    cin>>n;
    int index;
    int matrix[n];
    for(int &x:matrix)
    {
        index++;
        if(index%2 != 0)
        {
            x = index;
            cout<<x<<" ";
        }
    }
    system("pause>null");
    return 0;
}
