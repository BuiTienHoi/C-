#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    float x;
    system("chcp 1251>nul");
    cout<<"Calculate expression value sin(x): "<<endl;
    cout<<"Enter value x:";
    cin>>x;
    float x_cur = x;
    float x_next;
    double sum = x;
    for(int i=0;i<=100;i++)
    {
        x_next = ((-1)*x*x*x_cur)/((2*i+2)*(2*i+3));
        x_cur = x_next;
        sum += x_cur;
    }
    cout<<"Expression Value sin(x): "<<sum<<endl;
    system("pause>nul");
    return 0;
}
