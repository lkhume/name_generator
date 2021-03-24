#include "include/NameGen.h"

string NameGenerator::GenerateName(int len)
{
    string name = "";
    name.push_back(toupper(GenerateChar(true))); // first letter is capitalized vowel
    for (int i = 1; i < len; i++)
    {
        name.push_back(GenerateChar(i%2 == 0));
    }
    return name;
}

char NameGenerator::GenerateChar(bool isVowel) const
{
    if (isVowel)
    {
        return vowel[rand()%5];
    }
    else
    {
        //Generate random consonant
        return consonants[rand()%(ALPHABET_SIZE - 5)];
    }
}

int NameGenerator::main ()
{
    cout << "First Name: " << GenerateName(MIN_NAME_LENGTH + rand()%(MAX_NAME_LENGTH - MIN_NAME_LENGTH)) << '\n';
    cout << "Family Name: " << GenerateName(MIN_NAME_LENGTH + rand()%(MAX_NAME_LENGTH - MIN_NAME_LENGTH)) << '\n';
    return 0;
}

