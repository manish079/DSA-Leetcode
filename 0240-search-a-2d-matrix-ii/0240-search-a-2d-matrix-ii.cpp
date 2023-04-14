class Solution
{
    public:
        bool searchMatrix(vector<vector < int>> &matrix, int target)
        {

            if (target < matrix[0][0] && matrix.size() == 0)
                return false;

            int row = 0, col = matrix[0].size() - 1;

            while (row < matrix.size() && col >= 0)
            {

                if (matrix[row][col] == target)
                    return true;
                else if (matrix[row][col] < target)
                    row++;
                else
                    col--;
            }
            return false;
        }
};