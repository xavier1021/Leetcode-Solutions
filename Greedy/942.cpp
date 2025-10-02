class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size(); //代表perm裡面最大的數字是多少
        vector<int> perm(n+1,0); //perm裡面會有n+1個數字
        int lo= 0, hi =n; //一個代表最大一個是最小
        for (int i =0; i<=n ; i++){
            if(s[i]=='I'){ //後面的比現在大，現在放最小
                perm[i] = lo;
                lo +=1;
            }
            else if(s[i]=='D'){ //後面的比現在小，現在放最大
                perm[i]=hi;
                hi-=1;
            }
            else{
                perm[i]=lo; //也可以等於hi，因為此時hi=lo，這是perm最後一個數字
            }
        }
        return perm;        
    }
};