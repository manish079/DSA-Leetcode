class Solution
{
    public:

        int solve(vector<string> &str)
        {

            stack<int> s;

            for (auto it: str)
            {
               	// if operator found pop element and apply operator
                if (it == "+" || it == "-" || it == "*" || it == "/")
                {
                    int b = s.top();
                    s.pop();
                    int a = s.top();
                    s.pop();

                    int res;

                    if (it == "+")
                        res = a + b;
                    if (it == "-")
                        res = a - b;
                    if (it == "*")
                        res = long(a) * long(b);
                    if (it == "/")
                    {
                        res = a / b;
                    }
                    s.push(res);
                }
                else
                {
                    s.push(stoi(it));
                }
            }
            int ans = s.top();
            s.pop();
            return ans;
        }
    int evalRPN(vector<string> &tokens)
    {

        return solve(tokens);
    }
};