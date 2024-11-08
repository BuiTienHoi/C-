#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
    system("chcp 1251>nul");
    int number_matrix;
    cout<<"How many numbers of matrix do you want to enter: ";
    cin>>number_matrix;
    try
    {
        if(number_matrix == 0)
        {
            throw number_matrix;
        }
    }
    catch(int number_matrix)
    {
        cout<<"Error program!"<<endl;
        return 1;
    }
    cout<<"Fibonan"<<endl;
    int matrix[number_matrix];
    matrix[0] = 1;
    matrix[1] = 1;
    for(int index = 2;index<number_matrix;index++)
    {
        matrix[index] = matrix[index-1] + matrix[index-2];
    }
    for(int i=0;i<number_matrix;i++)
    {
        cout<<matrix[i]<<" ";
    }
    system("pause>nul");
    return 0;
}
