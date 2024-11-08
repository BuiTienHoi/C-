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
        if(number<0)
            throw number;
    }
    catch(int number)
    {
        cout<<"Error program!"<<endl;
        return 1;
    }
    int *matrix = new int[100];
    int k = 0;
    for(int index = 1;index<= number;index++)
    {
        if(number%index == 0)
        {
            *matrix = index;
            matrix++;
            k++;
        }
    }
    matrix -= k;
    for(int index = 0;index < k;index++)
    {
        cout<<matrix[index]<<" ";
    }
    system("pause>nul");
    return 0;
}
