// Time Complexity: O(logN)
// Space Complexity: O(1)

class Solution {
public:
    int NthRoot(int N, int M) {
        int l = 1, r = M;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            long long p = 1;
            for (int i = 1; i <= N; i++) {
                p *= mid;
                if (p > M) break;
            }

            if (p == M) return mid;
            if (p < M) l = mid + 1;
            else r = mid - 1;
        }

        return -1;
    }
};