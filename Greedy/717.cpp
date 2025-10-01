class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        int index = 0; //想成每一輪要開始拿的位置，不是上一輪被拿完的最後一個位置，因此我們要檢查的是一直取會不會剛好到最後一個數字的時候也剛好是下一輪他開始取
        while(index < n-1){
            if(bits[index]==1){
                index +=2;
            }
            else{
                index +=1;
            }
        }
        return index != n;
    }
};
//如果我們剛好停在最後一格（index = n-1），就表示最後的 0 是自己一個人（1-bit）；如果我們跳過最後一格（指標變成 n），就表示最後的 0 被前面的 1 吃掉，跟它組成了 10（2-bit）。