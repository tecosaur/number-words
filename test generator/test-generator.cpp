#include <iostream>
#include <string>
#include <regex>

using namespace std;
int main()
{
    string word;
    cout << "test case: ";
    getline(cin, word);

    smatch match;
    regex_match(word, match, regex(".*([A-z]).*"));
    int currentNumberForReplacement = 1;
    while (match.size() > 1)
    {
        // cout << "match: " << match[1] << '\n';
        word = regex_replace(word, regex((string)match[1], regex_constants::icase), "," + to_string(currentNumberForReplacement++));
        regex_match(word, match, regex(".*([A-z]).*"));
    }
    word = regex_replace(word, regex("^,"), "");
    word = regex_replace(word, regex("\\s,"), " ");

    cout << "result:    " << word << endl;
    return 0;
}
