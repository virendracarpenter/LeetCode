class Solution {
public:
    int minFlipsMonoIncr(const std::string& S, int counter_one  = 0, int counter_flip = 0) {
        for (auto ch : S) counter_flip = std::min(counter_one += ch - '0', counter_flip + '1' - ch);
        return counter_flip;
    }
};