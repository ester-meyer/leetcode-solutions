class Solution {
public:
    int reverse(int x) {
        long newX = 0;
        while(x){
            newX = newX * 10 + x%10;
            x /= 10;
        }
        if (newX > INT_MAX || newX < INT_MIN)
            return 0;
        return newX;
    }
};