class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for (int i=0 ; i<asteroids.size() ; i++) {
            if (asteroids[i] > 0) {
                st.push(asteroids[i]);
            } else {
                bool destroed = false;

                while (!st.empty() && st.top() > 0) {
                    if(abs(asteroids[i]) > st.top()){
                        st.pop();
                    }
                    else if(st.top() == abs(asteroids[i])){
                        st.pop();
                        destroed = true;
                        break;
                    }
                    else{
                        destroed = true;
                        break;
                    }
                }
                if (!destroed) {
                    st.push(asteroids[i]);
                }
            }
            
        }
        vector<int> ans;
            while(!st.empty()){
                ans.push_back(st.top());
                st.pop();
            }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};