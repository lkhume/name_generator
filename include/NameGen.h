//Include files
#include <random>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

//Definitions
#define MAX_NAME_LENGTH 9
#define ALPHABET_SIZE 26

//Method Headers
namespace NameGenerator
{
    char * GenerateName(int len);

    char GenerateChar(bool vowel, bool first_letter);
};

int main();