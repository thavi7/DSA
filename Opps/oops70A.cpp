#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class student{
  public:   //bu default its private
    string name;
    int age,roll;
    string grade;

    void setname(string s)
    {
         if (s.size()==0)
         {
            cout<<"invalide name "<<endl;
        
        return;
         }
         
        name=s;
    }
    void getname()
    {
        cout<<name<<endl;
    }
    string getgrade(int n)
    {
       if (n==123)
       {
        return grade;
       }
       return " ";
       
    }
};

int main() {
    
   student s1;
   s1.name="avi";
   s1.age=20;
   s1.roll=22;
   s1.grade="A+";

  // cout<<s1.age<<endl;

   student s2;
   s2.name="zee";
   s2.age=19;
   s2.roll=7;
   s2.grade="A+";

  s1.setname("");
  s1.getname();
  cout<<s1.getgrade(123)<<endl;
    return 0;
}