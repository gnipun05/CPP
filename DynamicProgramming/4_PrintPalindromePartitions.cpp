// leetcode question: https://leetcode.com/problems/palindrome-partitioning/

#include <bits/stdc++.h>
using namespace std;

    vector<vector<string>> partition(string s) {
        vector<vector<string>> answer;
        vector<string> palindrome;
        partition(s, 0, palindrome, answer);
        return answer;
    }
    void partition(string s, int start, vector<string>&palindrome, vector<vector<string>>&answer){
        if(start==s.size())
            answer.push_back(palindrome);
        else{
            for(int i=start; i<s.size(); i++){
                if(checkForPalindrome(s, start, i)){
                    palindrome.push_back(s.substr(start, i-start+1));
                    partition(s, i+1, palindrome, answer);
                    palindrome.pop_back();
                }
            }
        }
    }
    bool checkForPalindrome(string s, int start, int end){
        while(start<end)
            if(s[end--]!=s[start++])
                return false;
        return true;
    }