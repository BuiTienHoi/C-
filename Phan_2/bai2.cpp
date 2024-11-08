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
            throw number;

    }
    catch(int number)
    {
        cout<<"Error program!"<<endl;
        return 1;
    }
    int *matrix = new int[number];
    for(int index=0;index<number;index++)
    {
        *matrix = 2*index;
        matrix++;
    }
    matrix -= (number);
    cout<<*matrix<<endl;
    int sum =0;
    int index =0;
    do
    {
        sum += *(matrix+index);
        index++;
    }while(index<number);
    cout<<"Sum of number: "<<sum<<endl;
    system("pause>nul");
    return 0;
}
