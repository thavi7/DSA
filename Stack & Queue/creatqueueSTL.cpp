#include<bits/stdc++.h> 
using namespace std;

int main() {
    
    queue<int>q;
    q.push(5);
    cout<<q.front();
    q.push(10);
    cout<<q.front();
    q.push(15);
    cout<<q.front();
    q.pop();
   
    return 0;
}