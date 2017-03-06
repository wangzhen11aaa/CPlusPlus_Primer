//
// Created by wangzhen on 06/03/2017.
//

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype>
#include <ctime>

int main(void) {
    using std::cin;
    using std::cout;
    using std::string;
    using std::tolower;
    using std::ifstream;
    using std::vector;
    using std::endl;

    ifstream if_obj;
    if_obj.open("./words.txt");
    vector <string> wordlist;
    if (!if_obj.good())
        cout << "open file failed \n";
    else {
        string word;
        while (if_obj >> word)
            wordlist.push_back(word);
        cout << "Total worlds is " << wordlist.size() << endl;
    }


    std::srand(std::time(0));
    char play;
    cout << "Will you play a word game ? <y/n> ";
    cin >> play;
    play = tolower(play);
    while (play == 'y') {
        string target = wordlist[std::rand() % wordlist.size()];
        int length = target.length();
        string attempt(length, '-');

        string badchars;
        int guesses = 6;
        cout << "Guess my secret word. It has " << length
        << " letters, and you guess \n"
        << " one letter at a time. You get " << guesses
        << " wrong guesses chances. \n";
        cout << "Your word : " << attempt << endl;

        while (guesses > 0 && attempt != target) {
            char letter;
            cout << "Guess a letter : \n";
            cin >> letter;
            if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos) {
                cout << "You already guessed that. Try again. \n";
                continue;
            }
            unsigned long loc = target.find(letter);
            if (loc == string::npos) {
                cout << "Oh, bad guess! \n";
                --guesses;
                badchars += letter; // add to string
            }
            else {
                cout << "Good guess! \n";
                attempt[loc] = letter;
                //check if the letter appears again
                loc = target.find(letter, loc + 1);
                while (loc != string::npos) {
                    attempt[loc] = letter;
                    loc = target.find(letter, loc + 1);
                }

            }
            cout << "Your word: " << attempt << endl;
            if (attempt != target) {
                if (badchars.length() > 0)
                    cout << "Bad choices : " << badchars << endl;
                cout << guesses << "bad guesses chance left \n";
            }
        }
        if (guesses > 0)
            cout << "That's right \n";
        else
            cout << "Sorry, the word is " << target << ".\n";

        cout << "Will you play another <y/n>? \n";
        cin >> play;
        play = tolower(play);
    }
    cout << "Bye \n";
    return 0;
}

