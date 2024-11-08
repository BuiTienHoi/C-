#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    system("chcp 1251>nul");
    int n;
    int sum_of_odd_numbers = 0;
    cout<<"Enter number: ";
    cin>>n;
    try
    {
        if(n<0)
            throw n;
    }
    catch(int n)
    {
        cout<<"Error program!"<<endl;
        return 1;
    }
    for(int index = 1;index<=n;sum_of_odd_numbers += index,index+=2);
    cout<<"Sum of "<<n<<" number: "<<sum_of_odd_numbers;
    system("pause>nul");
    return 0;
}
