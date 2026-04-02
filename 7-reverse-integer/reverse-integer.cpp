class Solution {
public:
    int reverse(int n) {
        int reverseno=0;
        while(n !=0){
            int dig =n%10;
            if(reverseno>INT_MAX/10 || reverseno<INT_MIN/10){
                return 0;
            }
            reverseno=reverseno*10+dig;
            n=n/10;
        }
        return reverseno;
    }
};