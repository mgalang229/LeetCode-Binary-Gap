class Solution {
public:
    int binaryGap(int n) {
        int prev = -1, mx = 0;
        for (int bit = 0; bit < 32; bit++) {
            if (n & (1 << bit)) {
                if (prev == -1) {
                    prev = bit;
                } else {
                    mx = max(mx, bit - prev);
                    prev = bit;
                }
            }
        }
        return mx;
    }
};
