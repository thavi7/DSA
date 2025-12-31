#include <iostream>
#include<climits> 
using namespace std;

int main()
{
  // 1: Take 5 elements from user input and find its sum with the help of an array*****

  /* int i ,sum=0, arr[5];
   cout<<"Enter 5 num"<<endl;
    for ( i = 0; i < 5; i++)
    {
     cin>>arr[i];
    }
    for ( i = 0; i < 5; i++)
    {
     sum=sum+arr[i];
    }
    cout<<sum; */

  // Calculate the average of elements in an array of size 18****

  /* int i ,sum=0,size=5, arr[18];
  cout<<"enter the nums "<<endl;
     for ( i = 0; i <size; i++)
   {
    cin>>arr[i];
   }
   for ( i = 0; i <size; i++)
   {
    sum=sum+arr[i];
   }
   cout<<sum/size; */

  // Linear search**********

  /*int i,size;
  cout<<"enter size"<<endl;
  cin>>size;
  int arr[size];
  cout<<"Enter elements"<<endl;
 for ( i = 0; i < size; i++)
 {
   cin>>arr[i];
 }
 int target;
 cout<<"Choose ur number"<<endl;
 cin>>target;
 for ( i = 0; i < size; i++)
 {
  if (arr[i]==target)
  {
   cout<<"the index is "<<i;
  }
} */

  // Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.
  /* int i;
   char arr[26];

   for ( i = 0; i < 26; i++) {
       arr[i] = 'a' + i; // Fill array with consecutive letters
   }
   for (int i = 0; i < 26; i++) {
       cout << arr[i] << " ";
   }  */

  //Find the third smallest element in an array of unique elements of size n. Where n>3.
    int arr[1000];
    int n, i;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = INT_MAX;
    for (i = 0; i < n; i++) {
        if (arr[i] < ans) {
            ans = arr[i];
        }
    }

    int second = INT_MAX;
    for (i = 0; i < n; i++) {
        if (arr[i] != ans && arr[i] < second) {
            second = arr[i];
        }
    }

    int third = INT_MAX;
    for (i = 0; i < n; i++) {
        if (arr[i] != ans && arr[i] != second && arr[i] < third) {
            third = arr[i];
        }
    }

    if (third == INT_MAX) {
        cout << "There is no third distinct minimum element." << endl;
    } else {
        cout << "The third smallest element is: " << third << endl;
    }
  
  
  return 0;
}