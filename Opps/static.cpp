#include<bits/stdc++.h> 
using namespace std;


class customer
{
    string name;
    int acc_num,balance;
    static int total_num;
    public:

     //static int total_num;

    customer(string name,int acc_num, int balance)
    {
        this->name = name;
        this->acc_num=acc_num;
        this->balance = balance;
         total_num++;
    }
    void display()
    {
        cout<<name<<" "<<acc_num<<" "<<balance<<" "<<total_num<<endl;
    }

    void display_total()
    {
        cout<<total_num<<endl;
    }
};

 int customer::total_num =0;

int main() {
    customer A1("Avi",1,1000);
    customer A2("Ankur",2,1222);    
    A2.display_total();
    customer A3("Sayan",3,566);
    //customer::total_num =0;
    A3.display_total();
    return 0;
}