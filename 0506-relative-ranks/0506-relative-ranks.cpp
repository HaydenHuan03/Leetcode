class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();

        vector<pair<int, int>> scores;
        for(int i = 0; i < n; i++){
            scores.push_back({score[i], i});
        }

        sort(scores.begin(), scores.end(), greater<pair<int, int>>());

        vector<string> result(n);

        for(int i = 0; i < n; i++){
            int rank = scores[i].second;

            if(i == 0){
                result[rank] = "Gold Medal";
            }else if(i == 1){
                result[rank] = "Silver Medal";
            }else if(i == 2){
                result[rank] = "Bronze Medal";
            }else{
                result[rank] = to_string(i+1);
            }
        }

        return result;
    }
};