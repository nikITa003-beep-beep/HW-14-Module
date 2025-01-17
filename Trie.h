#pragma once

class Trie
{
public:
    TrieNode* root;

    Trie()
    {
        root = new TrieNode();
    }
    void insert(const std::string& word);
    void autocomplete(TrieNode* node, std::string prefix);
    void startAutocomplete(const std::string& prefix);
};

struct TrieNode
{
    TrieNode* children[26]; // Количество букв в английском алфавите
    bool isEndOfWord;
    TrieNode()
    {
        isEndOfWord = false;
        for (int i = 0; i < 26; i++)
        {
            children[i] = nullptr;
        }
    }

};
