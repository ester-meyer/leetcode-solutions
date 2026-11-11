class Solution {
public:
    int reverse(int x) {
        int newX = 0;
        while(x){
            if (newX > 2147483647 / 10 ||
                (newX == 2147483647 / 10 && x%10 > 7))
                return 0;
            if (newX < -2147483647 / 10 ||
                (newX == -2147483647 / 10 && x%10 < -8))
                return 0;
            newX = newX * 10 + x%10;
            x /= 10;
        }
        return newX;
    }
};