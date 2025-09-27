class Solution {
public:
    string addBinary(string a, string b) {
        string res = ""; //暫時反著存結果，最後會 reverse(res.begin(), res.end())
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0; //上一位的進位（0 或 1）

        while (i >= 0 || j >= 0 || carry) { //只要 a 或 b 還有位數沒加，或是 還有進位沒處理，就要繼續加。
            int sum = carry; //先把上一位的進位放進來，因為這一位要一起相加。
            if (i >= 0) sum += a[i--] - '0'; //a[i] 是字元 '0' 或 '1'，減掉字元 '0' 就變成整數 0 或 1。
            if (j >= 0) sum += b[j--] - '0'; //同理

            res += (sum % 2) + '0'; // 取當前位，數字 0/1 轉成字元 '0' 或 '1'，跟上方的相反
            carry = sum / 2;        // 更新進位
        }

        reverse(res.begin(), res.end()); // 因為是反著加的
        return res;
    }
};
