#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    system("chcp 1251>nul");
    int number;
    cout<<"Enter number: ";
    cin>>number;
    try
    {
        if(number < 0)
        {
            throw number;
        }
    }
    catch(int number)
    {
        cout<<"Error program!"<<endl;
        return 1;
    }
    int sigma;
    for(int index = 0;index<=number;sigma += index,index++);
    cout<<"Sum of "<<number<<" number: "<<sigma<<endl;
    system("pause>nul");
    return 0;
}
