class Solution {
public:

    // Convert vector of strings into one string
    string encode(vector<string>& strs) {

        string result = "";

        for (string s : strs) {

            // Store string length
            result += to_string(s.size()) + "#";

            // Store actual string
            result += s;
        }

        return result;
    }

    // Convert encoded string back into vector
    vector<string> decode(string s) {

        vector<string> result;

        int i = 0;

        while (i < s.size()) {

            // Find the delimiter after the length
            int j = i;

            while (s[j] != '#') {
                j++;
            }

            // Extract the length
            int len = stoi(s.substr(i, j - i));

            // Extract exactly len characters
            string word = s.substr(j + 1, len);

            result.push_back(word);

            // Move to the next encoded string
            i = j + 1 + len;
        }

        return result;
    }
};