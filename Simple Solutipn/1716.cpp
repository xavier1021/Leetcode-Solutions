class Solution {
public:
    int totalMoney(int n) {
        int mod = n % 7;
        int quot = n / 7;
        int total = 0;
        for (int i=0; i<quot; i++){
            total += (28 + 7*i);
        }
        for (int j = 0 ; j < mod ; j++){ 
            total += (quot +j +1); //要記得加1
        }
        return total;
    }
};