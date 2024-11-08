#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
    system("chcp 1251>nul");
    const int size = 12;
    int k;
    char symbs[size];
    char *p;
    char *q;
    p = symbs;
    p[0] = 'A';
    q = &symbs[size-1];
    while(p!=q)
    {
        cout<<*p<<" | ";
        p++;
        *p = *(p-1)+1;
    }
    cout<<"elements matrix: "<<endl;
    for(k=0;k<size;k++)
    {
        cout<<symbs[k]<<" | ";
    }
    system("pause>nul");
}
