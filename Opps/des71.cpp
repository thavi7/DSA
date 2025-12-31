#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class custom
{
 string name;
 public: 
 custom(string name)
 {
   this->name=name;
   cout<<"constructor is "<<name<<endl;
 }
 ~custom()
 {
     cout<<"distructor is "<<name<<endl;  
 }


};
int main() {
    custom A1("1"),A2("2"),A3("3");
    return 0;
}