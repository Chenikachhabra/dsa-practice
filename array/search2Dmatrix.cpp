#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int low = 0;
        int high = m * n - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            int row = mid / n;
            int column = mid % n;

            if (matrix[row][column] == target)
                return true;
            else if (matrix[row][column] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return false;
    }
};

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target = 13;

    Solution obj;

    if (obj.searchMatrix(matrix, target))
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}