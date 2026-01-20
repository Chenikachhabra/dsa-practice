#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> s;

        for (int i = 0; i < arr.size(); i++) {
            int x = arr[i];

            if (s.count(x * 2)) return true;
            if (x % 2 == 0 && s.count(x / 2)) return true;

            s.insert(x);
        }
        return false;
    }
};

int main() {
    vector<int> arr = {10, 2, 5, 3};
    Solution obj;  
    if (obj.checkIfExist(arr))
        cout << "true";
    else
        cout << "false";

    return 0;
}
