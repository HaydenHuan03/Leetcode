class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> nums;

        for(int asteroid : asteroids){
            bool destroyed = false;

            while(!nums.empty() && asteroid < 0 && nums.top() > 0){
                if(abs(asteroid) > abs(nums.top())){
                    nums.pop();
                    continue;
                }else if(abs(asteroid) == abs(nums.top())){
                    nums.pop();
                }

                destroyed = true;
                break;
            }

            if(!destroyed){
                nums.push(asteroid);
            }
        }
        
        vector<int> res(nums.size());
        for(int i = nums.size()-1; i>=0 ; --i){
            res[i] = nums.top();
            nums.pop();
        }

        return res;
    }
};