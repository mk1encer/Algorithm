class Solution {
public:
    int reverse(int x) {
        
        long result = 0;
        int flag = 0;
        if (x <= -2147483648 || x >=  2147483647)
            return 0;
        
        if(x < 0){
            flag = 1;
            x *= -1;
        }
        while(x >= 10){
            result += x%10;
            result *= 10;
            x /= 10;
        }
        result += x;
        
        if(flag == 1)
            result *= -1;
        
        if(result<= -2147483648 || result >=  2147483647)
            return 0;
        
        return result;
    }
};
