//
// Created by wangzhen on 18/02/2017.
//

#include <iostream>

int main(void)
{
    using namespace std;
    cout << "Enter words (q to quit) :\n";

    int vowel_count = 0;
    int consonant_count = 0;
    int other_count = 0;

    char pre_ch = ' ', ch, pos_ch;
    cin.get(ch);
    while (!(isspace(pos_ch = cin.get()) && isspace(pre_ch) && ch == 'q')) // This is used to determine whether input comes to a end, the expression order between && is tricky.
    {
        if (isspace(pre_ch)  && isalpha(ch)) // Means the start of new word
            switch (ch)
            {
                case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'i':
                case 'I':
                case 'o':
                case 'O':
                case 'u':
                case 'U':
                    ++vowel_count;
                    pre_ch = ch; // shift the slide window to right.
                    ch = pos_ch;
                    break;
                default:
                    ++consonant_count;
                    pre_ch = ch;
                    ch = pos_ch;
            }
        else if (isspace(pre_ch))
        {
            ++other_count;
            pre_ch = ch;
            ch = pos_ch;
        }
        else
        {
            pre_ch = ch;
            ch = pos_ch;
        }
    }

    cout << vowel_count << " words beginning with vowels \n";
    cout << consonant_count << " words beginning with consonants \n";
    cout << other_count << " others\n";

    return 0;

}