class Solution {
public:
    int fib(int n) {
        int fibIndex = 1;
        int fibLast = 0;
        
        if (n == 0) {return 0;}

        for (int i = 1; i < n; i++) {
            int temp = fibIndex;
            fibIndex += fibLast;
            fibLast = temp;
        }

        return fibIndex;
    }
};
