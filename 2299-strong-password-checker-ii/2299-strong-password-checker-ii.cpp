class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int check[4]={0};
        
        string special="!@#$%^&*()-+";
        for(int i=0;i<password.length();i++)
        {
            if(password.length()<8) return false;
            if(i<password.length()-1)
            {
                if(password[i]==password[i+1]) return false;
            }

            if(password[i]-'a'<26 && password[i]-'a'>=0) check[0]=1;

            if(password[i]-'A'<26 && password[i]-'A'>=0) check[1]=1;

            if(password[i]-'0'>=0 && password[i]-'0'<=9) check[2]=1;

            for(auto j : special) if(password[i]==j) check[3]=1;

        }
        for(int i=0;i<4;i++)
        {
            if(check[i]==0) return false;
        }
        return true;
    }
};