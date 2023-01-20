class Solution {
public:
int characterReplacement(string s, int k)
{
    int n = s.size();
    int i = 0, j = 0;
    int maxWindow = 0;
    int cmfc = 0; // count_most_Freq_char
    int windowLen = 0;
    vector<int> mpp(26, 0);
    while (j < n)
    {
        ++mpp[s[j] - 'A'];
        // for (int k = i; k <= j; ++k)
        // {
        //     cout << s[k];
        // }
        // cout << endl;
        cmfc = 0;
        windowLen = j - i + 1;
        //cmfc = *(max_element(mpp.begin(), mpp.end()));
        for (int i = 0; i < 26; ++i)
        {
            cmfc = max(cmfc, mpp[i]);
        }
        // cout << "Win Len: " << windowLen;
        // cout << "\tMax Elem: " << cmfc << endl;
        if (windowLen - cmfc <= k)
        {
            maxWindow = max(maxWindow, windowLen);
            
        }
        else if (windowLen - cmfc > k)
        {
            --mpp[s[i] - 'A'];
            ++i;
        }
        ++j;
    }
    return maxWindow;
}
};  