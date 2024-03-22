class Solution {
public:
    // store current combination
    vector<int> com;
    // store all combinations
    vector<vector<int>> r;

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        // helper function
        solve(0, target, candidates);
        return r;
    }

    void solve(int i, int t, vector<int> &c){
        // base cases
        if(t == 0){
            r.push_back(com);
            return;
        }
        else if(t < 0 or i == c.size()){
            return;
        }
        // recursion
        else{
            // include
            com.push_back(c[i]);
            solve(i, t-c[i], c);
            // backtrack
            com.pop_back();
            // exclude
            solve(i+1, t, c);
        }
    }
};
