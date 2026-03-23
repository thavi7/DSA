class Solution {
public:
    int countBattleships(vector<vector<char>>& a) {
        int n=a.size();
        int m=a[0].size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]=='X' ){
                  if(i>0 && a[i-1][j]=='X')continue;
                  if(j>0 && a[i][j-1]=='X')continue;

            c++;
                }
            }
        }
        return c;
    }
};