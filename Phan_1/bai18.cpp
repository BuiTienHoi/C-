#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    system("chcp 1251>nul");
    int number_of_matrix;
    cout<<"Enter number of matrix: ";
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
    *matrix = 1;
    *(matrix+1) = 1;
    for(int index = 2;index<=number_of_matrix;index++)
    {
        *(matrix+index) = *(matrix+index-2)+*(matrix+index-1);
    }
    for(int index = 0;index<=number_of_matrix;index++)
    {
        cout<<*matrix<<" ";
        matrix++;
    }
    system("pause>nul");
    return 0;
}
