class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int c=1;
        int n= digits.size();
        for(int i=n-1;i>=0;i--){
            if(digits[i]+c<=9){
                digits[i]=digits[i]+c;
                c=0;
                break;
            }
            else{
                int t = digits[i]+c;
                digits[i] = t%10;
                c=t/10;
            }
            
        }
        if(c>0){
         digits.insert(digits.begin(), c);
        }
        return digits;
    }
};