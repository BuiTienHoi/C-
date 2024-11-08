#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    system("chcp 1251>nul");
    for(int i=1;i<=10;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    system("pause>nul");
    return 0;
}
