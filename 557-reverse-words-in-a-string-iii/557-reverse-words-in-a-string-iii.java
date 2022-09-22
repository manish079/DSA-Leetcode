class Solution {
    public String reverseWords(String s) {
        
        char[] s1 = s.toCharArray();
        int i = 0;
        for(int j = 0; j < s1.length; j++)
        {
            if(s1[j] == ' ')
            {
                reverse(s1, i, j - 1);
                i = j + 1;
            }
        }
        //normal string only one string ex. hello
        reverse(s1, i, s1.length - 1);
        return new String(s1);
    }
    static void reverse(char[] str, int s, int e){
        while(s<e){
            char temp = str[s];
            str[s]=str[e];
            str[e]=temp;

            s++;e--;
        }
    }
}