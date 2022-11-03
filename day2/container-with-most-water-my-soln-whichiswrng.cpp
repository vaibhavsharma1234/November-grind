class Solution {
public:
    int maxArea(vector<int>& height) {
        map<int,vector<int>> mp1,mp2;
        mp1[0].push_back(height[0]);
         mp1[0].push_back(0);
        int m1=mp1[0][0];
        int m2=mp1[0][1];
        for(int i=1;i<height.size();i++){
            if(height[i]>m1){
                mp1[i].push_back(height[i]);
                mp1[i].push_back(i);
                m1=mp1[i][0];
                m2 = i;
            }
            else{
                mp1[i].push_back(m1);
                mp1[i].push_back(m2);
            }
        }
        mp2[height.size()-1].push_back(height[height.size()-1]);
         mp2[height.size()-1].push_back(height.size()-1);
        int m3=mp2[height.size()-1][0];
        int m4=mp2[height.size()-1][1];
                for(int i=height.size()-2;i>=0;i--){
            if(height[i]>m3){
                mp2[i].push_back(height[i]);
                mp2[i].push_back(i);
                m3=mp1[i][0];
                m4 = i;
            }
            else{
                mp1[i].push_back(m3);
                mp1[i].push_back(m4);
            }
        }
        int currans=0;
        int ans=0;
        for(int i=1;i<height.size()-1;i++){
            int a = min(mp1[i][0],height[i])*(i-mp1[i][1]);
            int b = min(mp2[i][0],height[i])*(mp2[i][1]-i);
            
           currans = max(a,b);
            ans= max(ans,currans);
        }
        return ans;
        
        
    }
};