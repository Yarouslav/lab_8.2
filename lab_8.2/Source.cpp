#include <iostream>
#include <string>

using namespace std;

size_t MaxWordLength(const string s) {
    size_t maxWordLength = 0;
    size_t currentWordLength = 0;
    for (size_t i = 0; i < s.length(); ++i) {
        char c = s[i]; 
        if (isalnum(c)) {
            // ���� �������� ������ � ������ ��� ������, �������� ������� ��������� �����
            currentWordLength++;
        }
        else {
            // ���� �������� ������ �� � ������ ��� ������, ���������, �� �� ���� �������� �����
            if (currentWordLength > maxWordLength) {
                maxWordLength = currentWordLength;
            }
            // �������� ������� ��������� ����� ��� �������� ��������
            currentWordLength = 0;
        }
    }
    // ��������� ������� ���������� ����� (���� ����� �� ���������� ������� ��� ������ ����������)
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
