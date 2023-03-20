class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cnt = 0;
        for (int i = 0; i < flowerbed.size(); i++){
            if(!flowerbed[i]){
                bool l = (i==0)||(flowerbed[i-1]==0);
                bool r = (i ==flowerbed.size()-1)||(flowerbed[i+1]==0);
            
                if(l && r){
                    flowerbed[i] = 1;
                    cnt++;
                }
            }
        }
        return cnt >=n;
    }
};