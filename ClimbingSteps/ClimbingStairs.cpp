class Solution {
public:
    int climbStairs(int n) {
        if(n == 1) {
            return 1;
        }
        if(n == 2) {
            return 2;
        }
        
        int ago2 = 1;
        int ago1 = 2;
        int result;
        for(int i = 3; i <= n; i++) {
            result = ago2 + ago1;
            ago2 = ago1;
            ago1 = result;
        }
        
        return result;
    }
};
