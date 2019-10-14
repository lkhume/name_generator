//Include files

//Definitions
#define MAX_NAME_LENGTH 9
#define ALPHABET_SIZE 26

//Method Headers
class NameGenerator
{
    public:
        char * GenerateName(int len);

    private:
        char GenerateChar(int seed) const;
};

int main();