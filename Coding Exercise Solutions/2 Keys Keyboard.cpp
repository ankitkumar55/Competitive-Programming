class Solution {
public:
    int minSteps(int num) {
        if (num == 1) {
            return 0;
        }

        int sum = 0;

        for (int i = 2; i * i <= num; i++) {
            while (num % i == 0) {
                sum += i;
                num /= i;
            }
        }

        // If num is still greater than 1 after the loop, it is a prime factor
        if (num > 1) {
            sum += num;
        }

        return sum;
    }
};
