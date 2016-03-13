class Solution {
public:
    int climbStairs(int n) {
        if (n == 1){
            return 1;
        }
        if (n == 2){
            return 2;
        }
        if (n<1){
            return 0;
        }
        int p1 = 1;
        int p2 = 2;
        for(int i = 2 ; i<n; i++){
            int temp = p1 + p2;
            p1 = p2;
            p2 = temp;
        }
        return p2;
    }
};