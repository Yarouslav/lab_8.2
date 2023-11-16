#include <iostream>
#include <string>

using namespace std;

size_t MaxWordLength(const string s) {
    size_t maxWordLength = 0;
    size_t currentWordLength = 0;
    for (size_t i = 0; i < s.length(); ++i) {
        char c = s[i]; 
        if (isalnum(c)) {
            // Якщо поточний символ є буквою або цифрою, збільшити довжину поточного слова
            currentWordLength++;
        }
        else {
            // Якщо поточний символ не є буквою або цифрою, перевірити, чи це було найдовше слово
            if (currentWordLength > maxWordLength) {
                maxWordLength = currentWordLength;
            }
            // Скидання довжини поточного слова для наступної ітерації
            currentWordLength = 0;
        }
    }
    // Перевірити довжину останнього слова (якщо рядок не закінчується пробілом або знаком пунктуації)
    if (currentWordLength > maxWordLength) {
        maxWordLength = currentWordLength;
    }
    return maxWordLength;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    size_t maxWordLen = MaxWordLength(str);
    cout << "Length of the longest word: " << maxWordLen << endl;

    return 0;
}
