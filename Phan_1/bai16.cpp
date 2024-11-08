#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    system("chcp 1251>nul");
    int number_of_matrix;
    cout<<"Enter number of the matrix: ";
    cin>>number_of_matrix;
    try
    {
        if(number_of_matrix<0)
            throw number_of_matrix;
    }
    catch(int number_of_matrix)
    {
        cout<<"Error program!"<<endl;
        return 1;
    }
    int *matrix = new int[number_of_matrix];
    for(int index =1;index<=number_of_matrix;index++)
    {
        *matrix = index*index;
        cout<<*matrix<<" ";
        matrix++;
    }
    system("pause>nul");
    return 0;
}
