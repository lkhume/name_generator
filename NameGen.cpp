#include <NameGen.h>

using namespace NameGenerator;

char * NameGenerator::GenerateName(int len)
{
    char *Name = (char*)malloc(MAX_NAME_LENGTH*sizeof(char));

    for (int i = 0; i < len; i++)
    {
        *(Name + i) = GenerateChar((i%2 == 0), (i == 0));
    }

    return Name;
}

char NameGenerator::GenerateChar(bool vowel, bool first_letter)
{

}

int main ()
{
    std::cout << GenerateName(rand() % (MAX_NAME_LENGTH + 1)) + ' ' << GenerateName(rand() % (MAX_NAME_LENGTH + 1)) << endl;

    return 0;
}