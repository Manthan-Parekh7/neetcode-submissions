class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;

        for(auto& str : strs){
            int ln = str.length();
            string s1 = to_string(ln);
            encoded_string.append(s1);
            encoded_string += "#";
            encoded_string.append(str);
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strs;
        int i = 0;
        while(i < s.size()){
           int j = i;
           while(s[j] != '#') j++;
            // Length of the string to read
           int charToRead = stoi(s.substr(i, j - i));

           string temp = s.substr(j + 1, charToRead);
           decoded_strs.push_back(temp);

           // Move to next encoded string
            i = j + 1 + charToRead;
        }
        return decoded_strs;
    }
};
