class Solution {
public:
    bool isPalindrome(string s) {

        string strip;

        for(auto itr : s){

            if(isalnum(itr)){

                strip+= (char)tolower(itr);

            }

        }

        string original = strip;

        reverse(strip.begin(), strip.end());

        bool flag = false;

        

        if(original == strip ){
            flag = true;
        }

        return flag;
    }
};
