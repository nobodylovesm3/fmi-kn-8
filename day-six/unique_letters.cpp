#include <iostream>


bool isLetter(const char letter){
    return (letter >= 'a' && letter <= 'z') ||
           (letter >= 'A' && letter <= 'Z');
}

void printUniqueLetters(const char currentLetter){
  int unique[27] = { 0, };
    for (int i = 0; str[i] != '\0'; i++)
    {
        char tempLetter = toLower(str[i]);
        if(isLetter(str[i]) && unique[tempLetter - 'a'] == 0)
        {
            unique[tempLetter - 'a']++;
            std::cout << str[i];
        }
    }
    std::cout << '\n';
}

char letterToLowercase(char letter){
  return (letter >= 'A' && letter <= 'Z') ? letter + ('a'-'A') : letter;
}

void printEncounters(const char name[]){
  int unique[27] = { 0, };
    for (int i = 0; str[i] != '\0'; i++)
    {
        int currentCnt = 0;
        char currentLetter = toLower(str[i]);
        if(isLetter(str[i]) && unique[currentLetter - 'a'] == 0)
        {
            unique[currentLetter - 'a']++;
            for (int j = i; str[j] != '\0'; j++)
            {
                char toCompare = toLower(str[j]);
                if(currentLetter == toCompare)
                    currentCnt++;
            }
            std::cout << currentLetter << " -> " << currentCnt << '\n';
            currentCnt = 0;
        }

    }
    std::cout << '\n';
}

int main(){

  char name[100];
  std::cin.getline(name,100);
  printEncounters(name);
  printUniqueLetters(name);
}
