class Solution {
public:
    int celebrity(vector<vector<int>>& mat) {
        int n = mat.size();
        stack<int> st;

        for (int i = 0; i < n; i++) {
            st.push(i);
        }

        while (st.size() > 1) {
            int A = st.top(); 
            st.pop();
            int B = st.top();
            st.pop();

            if (mat[A][B] == 1) {
                st.push(B);
            } else {
                st.push(A);
            }
        }

        int cand = st.top();

        for (int i = 0; i < n; i++) {
            if (i == cand) continue;
            if (mat[cand][i] == 1 || mat[i][cand] == 0) {
                return -1;
            }
        }
        return cand;
    }
};
