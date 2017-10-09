class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string>dict(wordList.begin(),wordList.end());
        if(!dict.count(endWord)) return 0;
        queue<string>q;
        q.push(beginWord);
        int step = 0;
        int l = beginWord.length();
        while (!q.empty())
        {
            ++step;
            int size = q.size();
            while(size>0)
            //for(int size = q.size();size>0;size--)//??????????
            //上面那个for loop也可以替代成while loop。比如hit变一位，可以变成hat,或者hpt。那么把hat和hpt都放进queue里
            //注，hat和hpt都在dict里哈。放进queue里以后，在unordered_set里再删除掉hat和hpt
            //因为BFS都是用queue的
            {
                string w = q.front();
                q.pop();
                size--;
                for (int i = 0;i<l;i++)
                {
                    char ch = w[i];
                    for (int j = 'a';j<='z';j++)
                    {
                        w[i]=j;
                        if(w==endWord){return step+1;}
                        if(!dict.count(w)) continue;
                        dict.erase(w);
                        q.push(w);
                    }
                    w[i] = ch;
                }
            }
        }
        return 0;
    }
};
