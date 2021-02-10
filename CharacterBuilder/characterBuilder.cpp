#include <iostream>

using namespace std;

struct CharacterModel
{
    string name;
    string classType;
    int charLevel;
};

CharacterModel characterCreator()
{
    CharacterModel cm;

    cout << "Enter a name for your character" << endl;
    cin >> cm.name;
    cout << "Enter a Class for your character" << endl;
    cin >> cm.classType;
    
    cm.charLevel = 1;

    return cm;
}

int main(int argc, char const *argv[])
{
    CharacterModel char1;
    char1 = characterCreator();

    cout << "Character name: " << char1.name << "\nCharacter class: " << char1.classType << "\nCharacter level: " << char1.charLevel << endl;
    
    return 0;
}