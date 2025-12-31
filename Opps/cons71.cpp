#include <iostream>
#include <climits>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class customer
{
    string name;
    int acc_no;
    int balance;

public:
    // default constructor
    customer()
    {
        name = "avi";
        acc_no = 1234;
        balance = 1000;
    }

    // parameterized constructor

  /* customer(string name, int acc_no, int balance)
    {
      this->name = name;
      this->acc_no = acc_no;
      this->balance = balance;
    }  */
    // constructor overloading
    customer(string a, int b)
    {
        name = a;
        acc_no = b;
        balance = 50;
    }
    //inline constructor
  inline  customer(string a, int b, int c):name(a),acc_no(b),balance(c){

  }

  //copy constructor
  customer(customer &B)
  {
    name=B.name;
    acc_no=B.acc_no;
    balance=B.balance;
  }

    void display()
    {
        cout << name << " " << acc_no << " " << balance<<endl;
    }
    ~customer()
    {
     
    }
};
int main()
{
    customer A1;
    customer A2("Abhi", 321, 2000);
    customer A3("zee", 4321);
    A1.display();
    A2.display();
    A3.display();
    customer A4(A3);
    A4.display();
    customer A5;
    A5=A3;
    A5.display();
    return 0;
}