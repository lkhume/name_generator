//Include files
#include <random>
#include <iostream>
#ifdef _WIN32
#indluce <Windows.h>
#else
#include <unistd.h>
#endif

//Definitions
#define MAX_NAME_LENGTH 9
#define MIN_NAME_LENGTH 3
#define ALPHABET_SIZE 26

using namespace std;
//Method Headers
class NameGenerator
{
    public:
        NameGenerator() {};
        ~NameGenerator() {};
        int main();
        string GenerateName(int len);

    private:
        char GenerateChar(bool isVowel) const;

        char vowel[5] = {'a', 'e', 'i', 'o', 'u'};
        char consonants[ALPHABET_SIZE - 5] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
};
