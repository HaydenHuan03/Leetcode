class Solution {
public:
    void generate(int openC, int closeC, string curr, vector<string>& res, int n){
        //Check if all open and close used
        if(curr.length() == 2 * n){
            res.push_back(curr);
            return;
        }
        //Check if all open count used
        if(openC < n){
            generate(openC + 1, closeC, curr + "(", res, n);
        }
        //Check if all close count used
        if(closeC < openC){
            generate(openC, closeC + 1, curr + ")", res, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        generate(0, 0, "", res, n);
        return res;
    }
};