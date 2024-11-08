#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    system("chcp 1521>nul");
    int number_1,number_2;
    cout<<"Enter number 1: ";
    cin>>number_1;
    cout<<"Enter number 2: ";
    cin>>number_2;
    try
    {
        if(number_1 < 0 || number_2 <0)
            throw number_1;
    }
    catch(int number)
    {
        cout<<"Error program!"<<endl;
        return 1;
    }
    int value_min = min(number_1,number_2);
    for(int index = value_min;index >= 1;index--)
    {
        if((number_1 % index == 0) && (number_2 % index == 0))
        {
            cout<<"MAX value: "<<index<<endl;
            break;
        }
    }
    system("pause>nul");
    return 0;
}
