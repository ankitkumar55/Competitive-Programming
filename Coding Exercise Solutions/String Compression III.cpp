class Solution {
public:
    string compressedString(string word) {
        string comp="";
        int c=1;
        int n=word.length();
        if(n==1)
        {
            comp+=to_string(1);
            comp+=word[0];
        }
        for(int i=1;i<n;i++)
        {
            if(word[i]==word[i-1]&&c<9)
            {
                c++;
            }
            else
            {
              
                comp+=to_string(c);
                comp+=word[i-1];
                c=1;
            }
            if(i==n-1)
            {
               if(c>9)
               {
                comp+=to_string(9);
                comp+=word[i];
                comp+=to_string(c-9);
                comp+=word[i];
               }
               else
               {
                comp+=to_string(c);
                 comp+=word[i];
               }
            }

        }
        return comp;
    }
};
