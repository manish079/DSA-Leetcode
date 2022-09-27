class Solution {
public:
    int myAtoi(string s) {
        string a="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                continue;
            }
            else if(s[i]=='+'||s[i]=='-'||(s[i]>='0'&&s[i]<='9'))
            {
                a+=s[i];
                for(int j=i+1;j<s.length();j++)
                {
                    if(s[j]>='0'&&s[j]<='9')
                    {
                        a+=s[j];
                    }
                    else{
                        break;
                    }
                }
                break;
            }
            else{
                return 0;
            }
        }
        long ans=0;
        int sign=+1;
        for(int i=0;i<a.length();i++)
        {
            if(a[i]=='+')
            {
                continue;
            }
            if(a[i]=='-')
            {
                sign=-1;
                continue;
            }
            ans=ans*10+(a[i]-'0');
            if(ans>INT_MAX)
            {
                if(sign==-1)
                {
                    return INT_MIN;
                }
                else{
                    return INT_MAX;
                }
            }
        }
        return ans*sign;
    }
};