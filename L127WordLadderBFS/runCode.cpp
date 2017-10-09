// Author: Huahua
// Running time: 93 ms
#include <iostream>
#include <queue>
#include <unordered_set>
#include <vector>
using namespace std;
int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
    unordered_set<string> dict(wordList.begin(), wordList.end());        
    if (!dict.count(endWord)) return 0;
    
    queue<string> q;
    q.push(beginWord);
    
    int l = beginWord.length();
    int step = 0;
    
    while (!q.empty()) {
        ++step;
        for (int size = q.size(); size > 0; size--) {                
            string w = q.front();                
            q.pop();
            for (int i = 0; i < l; i++) {                
                char ch = w[i];
                for (int j = 'a'; j <= 'z'; j++) {
                    w[i] = j;
                    // Found the solution
                    if (w == endWord) return step + 1;
                    // Not in dict, skip it
                    if (!dict.count(w)) continue;
                    // Remove new word from dict
                    dict.erase(w);
                    // Add new word into queue
                    q.push(w);
                    cout<<"q.push:"<<w<<endl;                    
                }
                w[i] = ch;
            }
        }
    }
    return 0;
}
int main()
{
    string beginWord = "hit";
    string endWord = "cog";
    vector<string> wordList {"hot","dot","dog","lot","log","cog"};
    int a = 0;
    a = ladderLength(beginWord,endWord,wordList);
    cout<<"step: "<<a<<endl;
    return 0;
}
