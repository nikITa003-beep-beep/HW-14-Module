#include "Trie.h"
#include <iostream>

void Trie::insert(const std::string& word)
{
    TrieNode* node = root;

    for (char c : word)
    {
        int index = c - 'a';
        if (!node->children[index])
        {
            node->children[index] = new TrieNode();
        }
        node = node->children[index];
    }
    node->isEndOfWord = true;
}

void Trie::autocomplete(TrieNode* node, std::string prefix)
{
    if (node->isEndOfWord)
    {
        std::cout << prefix << std::endl;
    }

    for (int i = 0; i < 26; i++)
    {
        if (node->children[i])
        {
            autocomplete(node->children[i], prefix + char(i + 'a')); // Рекурсия
        }
    }
}

void Trie::startAutocomplete(const std::string& prefix)
{
    TrieNode* node = root;

    for (char c : prefix)
    {
        int index = c - 'a';

        if (!node->children[index])
            return;

        node = node->children[index];
    }
    autocomplete(node, prefix);
}
