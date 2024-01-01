#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie
{

public:
    bool allChildrenNull(TrieNode *node)
    {
        for (int i = 0; i < 26; i++)
        {
            if (node->children[i] != NULL)
                return false;
        }
        return true;
    }

public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        // assumption: all the letters are in CAPS
        int index = word[0] - 'A';
        TrieNode *child;

        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // recursion
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
            return root->isTerminal;

        int index = word[0] - 'A';
        TrieNode *child;

        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // absent
            return false;
        }

        // recursion
        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word)
    {
        return searchUtil(root, word);
    }

    void removeUtil(TrieNode *root, string word, int depth)
    {
        if (depth == word.length())
        {
            // Reached the end of the word, mark it as non-terminal
            root->isTerminal = false;
            return;
        }

        int index = word[depth] - 'A';
        TrieNode *child = root->children[index];

        if (child == NULL)
        {
            // Word not found in the trie
            return;
        }

        // Recursion to the next level
        removeUtil(child, word, depth + 1);

        // Check if the child node can be removed
        if (!child->isTerminal && allChildrenNull(child))
        {
            delete child;
            root->children[index] = NULL;
        }
    }

    void removeWord(string word)
    {
        removeUtil(root, word, 0);
    }
};

int main()
{
    Trie *t = new Trie();

    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("TIME");

    cout << "Present or Not: " << t->searchWord("DO") << endl;

    // Remove the word "DO"
    t->removeWord("DO");

    cout << "Present or Not after removal: " << t->searchWord("DO") << endl;

    delete t;

    return 0;
}