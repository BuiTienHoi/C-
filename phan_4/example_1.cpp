#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class MyMoney
{
public:
    string name;
    double money;
    double rate;
    int time;
    MyMoney()
    {
        name = "";
        money = 0;
        rate = 0;
        time = 0;
    }
    MyMoney(string n, double m,double r,int t)
    {
        setAll(n,m,r,t);
    }
    double getMoney()
    {
        double s=money;
        for(int k=1;k<=time;k++)
        {
            s*= (1+rate/100);
        }
        return s;
    }
    void showAll()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Money: "<<money<<endl;
        cout<<"Rate: "<<rate<<endl;
        cout<<"Years: "<<time<<endl;
        cout<<"Sigma Money: "<<getMoney()<<endl;
        for(int k=1;k<=35;k++)
        {
            cout<<"-";
        }
        cout<<endl;
    }
    void setAll(string n,double m, double r, int t)
    {
        name = n;
        money = m;
        rate = r;
        time = t;
    }
    MyMoney operator++()
    {
        money = money+1000;
        return *this;
    }
    MyMoney operator++(int)
    {
        time++;
        return *this;
    }
    MyMoney operator+(MyMoney obj)
    {
        MyMoney tmp;
        tmp.name = "Bui Tien Hoi";
        tmp.money = money + obj.money;
        tmp.rate = (rate>obj.rate)?rate:obj.rate;
        tmp.time = (time+obj.time)/2;
        return tmp;
    }
};
MyMoney operator--(MyMoney &obj)
    {
        if(obj.money>1000)
        {
            obj.money -= 1000;
        }
        else
        {
            obj.money = 0;
        }
        return obj;
    }
    MyMoney operator--(MyMoney &obj,int)
    {
        if(obj.time>0)
        {
            obj.time--;
        }
        else
        {
            obj.time = 0;
        }
        return obj;
    }
int main()
{
    system("chcp 1251>nul");
    MyMoney objA("Meo",1200,7,1);
    objA.showAll();
    objA--;
    objA.showAll();
    objA--;
    objA.showAll();
    system("pause>nul");
    return 0;
}
