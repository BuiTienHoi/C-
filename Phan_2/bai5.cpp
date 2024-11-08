#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("chcp 1251>nul");
    float x;
    cout<<"Calculate expression value ln(1+x): "<<endl;
    cout<<"Enter value x: ";
    cin>>x;
    double sum = x;
    float x_next;
    float x_cur;
    x_cur = x;
    for(int i=1;i<=100;i++)
    {
        x_next = ((-1)*x*i*x_cur)/(i+1);
        x_cur = x_next;
        sum += x_cur;
    }
    cout<<sum;
    system("pause>nul");
    return 0;
}
