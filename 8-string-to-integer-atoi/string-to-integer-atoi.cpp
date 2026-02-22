class Solution {
public:
    int myAtoi(string s) {
      int n=s.size();
        int idx=0;
        while(idx < n  && s[idx]==' ')
        {
            idx++;
        }


          string t;
int f=2;
       if(s[idx]=='+'){f=0,idx++;}
       else if(s[idx]=='-'){f=1,idx++;}
       
    //    if(f==0)t+='+';
       if(f==1)t+='-';
       
        while(idx < n  && s[idx]=='0')
        {
            idx++;
        }



      

       for(int i=idx;i<n;i++)
       {
        if(s[i]>=48 && s[i]<=57)t+=s[i];
        else break;
       }
bool fl=0;
    for(auto x:t)
    {
        if(x>=48 && x<=57)
        {
            fl=1;
            break;
        }
    }
    if(!fl)return 0;

        
    long long num=0;
idx=0;
    int x=0;
    bool ha=0;
    if(t[idx]=='-' || t[idx]== '+')idx++;
    for(int i=idx;i<t.size();i++)
       {
        x++;
        if(x>10){
            ha=1;
            break;
        }
       }
       if(ha){
        if(t[0]=='-')return INT_MIN;
        else return INT_MAX;
       }
else{
    num=stoll(t);
}

    
    if(num<INT_MIN)return INT_MIN;  
    else if(num>INT_MAX) return INT_MAX;
    else return num;




    }
};