#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
   /* char arr[10];
    cout<<"num"<<endl;
    cin>>arr;
    arr[2]='\0';
    cout<<arr;    */

   
   /*string s="abhisek";
  cout<<s;*/

  /*string s;
  cin>>s;
  cout<<s;*/

 
 /* string s;
  getline(cin,s);
 cout<<s<<endl;
 cout<<s.size(); */

 /* string s1= "avi" , s2="lotus";
 string s3=s1+s2;
 cout<<s3<<endl;

 s1.push_back('p');
 cout<<s1<<endl;
 s1.pop_back();
 cout<<s1<<endl;
 //or
 s1=s1+'l';
 cout<<s1;   */

/* string s="avi is a \"good\" boy";
cout<<s; */

//revese string***

string s="abhisek";
int st=0, end= s.size()-1;
while (st<end)
{
    swap(s[st],s[end]);
    st++,end--;
}
cout<<s<<endl;

 //length***

 int size=0;
 while (s[size] != '\0')
 {
    size++;
 }
 
 cout<<size<<endl<<endl;

 //pallindroam****

 string s1="naman";
  st = 0, end=s1.size()-1;
  while (st<end)
  {
    if (s1[st] != s1[end] )
    {
        cout<<"not a pallindroam"<<endl;
        return 0;
    }
    st++, end--;
  }
  cout<<"pallindroam"<<endl;
    return 0;
}