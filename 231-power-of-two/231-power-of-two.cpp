class Solution {
public:
    bool isPowerOfTwo(int n) {
        bitset<32> b2(n);
        if(n<=0)
            return 0;
        return b2.count()>1?false:1;
    }
};