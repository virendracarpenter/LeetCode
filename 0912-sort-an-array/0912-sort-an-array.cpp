#define v vector<int>
#define pb push_back
class Solution {
public:
    v sortArray(v& nums) {
        int n = nums.size();
        mergeSort(nums, n);
        return nums;
    }

    void mergeSort(v& A, int n)
    {
        if (n < 2)
            return;
        int mid = n / 2;
        v L, R;
        for (int i = 0; i < n; i++)
        {
            if (i < mid)
                L.pb(A[i]);
            else
                R.pb(A[i]);
        }
        mergeSort(L, L.size());
        mergeSort(R, R.size());
        mergeArrays(A, L, R);
    }
    void mergeArrays(v &A, v &L, v &R)
    {

        int sizeL = L.size();
        int sizeR = R.size();
        int i = 0, j = 0, k = 0;

        while (i < sizeL && j < sizeR)
        {
            if (L[i] <= R[j])
            {
                A[k] = L[i];
                i++;
            }
            else
            {
                A[k] = R[j];
                j++;
            }
            k++;
        }

        while (i < sizeL)
        {
            A[k] = L[i];
            i++;
            k++;
        }
        while (j < sizeR)
        {
            A[k] = R[j];
            j++;
            k++;
        }
    }
};