#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
    system("chcp 1251>null");
    int number;
    cout<<"how many number do you want to enter: ";
    cin>>number;
    int matrix[number];
    int index;
    cout<<"Matix: ";
    for(int &x:matrix)
    {
        x = ++index;
        cout<<x<<" ";
    }
    cout<<"\nNumbers divided by 4 leave remainder 3"<<endl;
    for(int i = 0;i<index;i++)
    {
        if(matrix[i]%4 == 3)
        {
            cout<<matrix[i]<<" ";
        }
    }
    system("pause>null");
    return 0;
}
