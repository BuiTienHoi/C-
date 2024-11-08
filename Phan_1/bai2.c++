#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("chcp 1251>nul");
    int index = 0;
    int matrix[10];
    for(int &x:matrix)
    {
        index++;
        if(index%2)
        {
            x = index;
            cout<<x<<" ";
        }
        if (index == 10)
        {
            break;
        }
    }
    cout<<endl;
    system("pause>nul");
    return 0;
}