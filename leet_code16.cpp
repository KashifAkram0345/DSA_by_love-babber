#include <iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;

        while (n != 0) {
            int digit = n % 10;
            product *= digit;   // same as product = product * digit
            sum += digit;       // same as sum = sum + digit
            n = n / 10;
        }

        int ans = product - sum;
        return ans;
    }
};

int main() {
    Solution obj;
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = obj.subtractProductAndSum(number);
    cout << "Result (Product - Sum) = " << result << endl;

    return 0;
}
