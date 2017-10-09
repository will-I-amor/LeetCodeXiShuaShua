//这个程序是讲，为什么在文件runCode.cpp 37行，要把w[i]=ch
//我们把hit里面，从第1位开始，每一位都用1个字母去试，每一位试遍26个字母。试的时候，我们是改变了当前字母的
//比如hit，试hot。那么第2位字母时被改变了的，我们要用w[i]=ch在for loop结尾变回来
#include <iostream>
#include <queue>
#include <unordered_set>
#include <vector>
using namespace std;
int main()
{
    string beginWord = "hit";
    string endWord = "hot";
    for (int i = 0;i<beginWord.size();i++)
    {
    	char ch = beginWord[i];
    	for (int j = 'a';j<='z';j++)
    	{
    		beginWord[i] = j;
    		if (beginWord!="hot")
    		{
    			cout<<"beginWord : "<<beginWord<<" not found, and continue"<<endl;
    			continue;
    		}
    		if (beginWord=="hot")
    		{
    			cout<<"found hot"<<endl;
    		}
    	}
    	beginWord[i] = ch;
    }
    return 0;
}
