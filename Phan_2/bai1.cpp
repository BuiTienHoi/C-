#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
    system("chcp 1251>nul");
    int number;
    cout<<"Enter number: ";
    cin>>number;
    int sum_of_number = 0;
    for(int index = 1;index<=number;sum_of_number+=index,index+=2);
    cout<<"Sum of "<<number<<" number: "<<sum_of_number<<endl;
    system("pause>nul");
    return 0;
}
