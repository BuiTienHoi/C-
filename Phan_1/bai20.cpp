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
    for(int index = 0;index<number_of_matrix;index++)
    {
        cout<<"Number "<<index+1<<": ";
        cin>>*matrix;
        matrix++;
    }
    cout<<"Matrix: "<<endl;
    matrix = matrix-number_of_matrix;
    for(int index = 0;index<number_of_matrix;index++)
    {
        cout<<*(matrix+index)<<" ";
    }
    for(int i=0;i<number_of_matrix;i++)
    {
        for(int j=i+1;j<number_of_matrix;j++)
        {
            if(*(matrix+i)>*(matrix+j))
            {
                swap(*(matrix+i),*(matrix+j));
            }
        }
    }
    cout<<"\nMatrix"<<endl;
    for(int index = 0;index<number_of_matrix;index++)
    {
        cout<<*(matrix+index)<<" ";
    }
    system("pause>nul");
    return 0;
}
