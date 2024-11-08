#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    system("chcp 1251>nul");
    int number;
    cout<<"Which of value do you want to enter: ";
    cin>>number;
    try
    {
        if(number < 0 || number == 0)
            throw number;
    }
    catch(int number)
    {
        cout<<"Error program!"<<endl;
        return 1;
    }
    int matrix[number+1];
    matrix[0] = 1;
    for(int index=0;index<=number;index++)
    {
        matrix[index+1] = matrix[index]*(number-index)/(index+1);
        cout<<"C"<<number<<" "<<index<<" = "<<matrix[index]<<endl;
    }
    system("pause>nul");
    return 0;
}
