#include <iostream>

bool isVowel(char ch) {
    ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

bool isConsonant(char ch) {
    ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
    return (ch >= 'a' && ch <= 'z') && !isVowel(ch);
}

bool isDigit(char ch) {
    return ch >= '0' && ch <= '9';
}

void analyzeFile(const char* inputFile, const char* outputFile) {
    FILE* in = nullptr;
    FILE* out = nullptr;

    if (fopen_s(&in, inputFile, "r") != 0 || !in) {
        std::cout << "Ошибка открытия входного файла.\n";
        return;
    }

    if (fopen_s(&out, outputFile, "w") != 0 || !out) {
        std::cout << "Ошибка открытия выходного файла.\n";
        fclose(in);
        return;
    }

    int ch;
    size_t charCount = 0;
    size_t lineCount = 0;
    size_t vowelCount = 0;
    size_t consonantCount = 0;
    size_t digitCount = 0;

    while ((ch = fgetc(in)) != EOF) {
        ++charCount;
        if (ch == '\n') ++lineCount;
        else if (isDigit(ch)) ++digitCount;
        else if (isVowel(ch)) ++vowelCount;
        else if (isConsonant(ch)) ++consonantCount;
    }

    if (charCount > 0 && lineCount == 0) lineCount = 1;

    fprintf(out, "Количество символов: %zu\n", charCount);
    fprintf(out, "Количество строк: %zu\n", lineCount);
    fprintf(out, "Количество гласных букв: %zu\n", vowelCount);
    fprintf(out, "Количество согласных букв: %zu\n", consonantCount);
    fprintf(out, "Количество цифр: %zu\n", digitCount);

    std::cout << "Статистика записана в файл: " << outputFile << std::endl;

    fclose(in);
    fclose(out);
}

int main() {
    setlocale(LC_ALL, "");

    const char* inputFile = "input.txt";
    const char* outputFile = "stats.txt";

    analyzeFile(inputFile, outputFile);
    return 0;
}