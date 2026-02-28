class Solution {
public:
    string mergeCharacters(string s, int k) {
        int n=s.size();

   while(1){
bool y=0;
    for(int i=0;i<s.size();i++)
            {
                for(int j=i+1;j<s.size();j++)
                    {
                        if(s[j]==s[i] && j-i<=k)
                        {
                            s.erase(j,1);
                            y=1;
                            break;
                        }

                    }
                    if(y)break;
            }
            if(!y)break;
   }
        return s;
    }
};