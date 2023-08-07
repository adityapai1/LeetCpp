class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string , vector<string>> mapper;

        string temp;
        for(int i = 0; i<strs.size();i++){
            temp = strs[i];
            sort(strs[i].begin(),strs[i].end());
            mapper[strs[i]].push_back(temp);
        }
        
        vector<vector<string>> result;
        for( auto itr = mapper.begin(); itr!= mapper.end(); itr++ ){
            result.push_back(itr->second);
        }

        return result;
    }
};
