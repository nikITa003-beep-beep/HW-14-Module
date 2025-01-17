#include <iostream>
#include "Trie.h"

void main()
{
    system("chcp 1251");
    Trie trie;
    trie.insert("apple");
    trie.insert("appel");
    trie.insert("application");
    trie.insert("back");
    trie.insert("backdoor");
    trie.insert("backflip");

    std::string prefix;

    while (true)
    {
        std::cout << "¬ведите префикс на английском €зыке: ";
        std::cin >> prefix;
        trie.startAutocomplete(prefix);
    }
}

