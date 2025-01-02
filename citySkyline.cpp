class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> rowMax;
        vector<int> colMax;
        int n=grid.size();
        int ans=0;
        for(int i=0;i<n;i++){
            rowMax.push_back(*max_element(grid[i].begin(),grid[i].end()));
            int temp=0;
            for(int j=0;j<n;j++){
                temp=max(temp,grid[j][i]);
            }
            colMax.push_back(temp);
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans+=min(rowMax[i],colMax[j])-grid[i][j];
            }
        }
        return ans;
    }
};
