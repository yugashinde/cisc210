//
// Created by yuga shinde on 9/17/23.
//

#include <string>
#include <iostream>
#include <cmath>

void swap(int* ptr1, int* ptr2) {
    //1. void swap(int*, int*): takes pointers to 2 integers and swaps them
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

std::string everyNchar(const std::string& inputStr, int n) {
    std::string result;
    for (int i = 0; i < inputStr.length(); i += n) {
        result += inputStr[i];
    }
    return result;
}


void duplicateString(const std::string& inputStr, int count) {
    //2
    if (count <= 0) {
        // If the integer is 0 or negative, print nothing.
        return;
    }

    for (int i = 0; i < count; ++i) {
        std::cout << inputStr;
    }
}

std::string reverseNchar(const std::string& inputStr, int n) {
    std::string result;
    for (int i = inputStr.length() - 1; i >= 0; i -= n) {
        result += inputStr[i];
    }
    return result;
}
std::string divisibleString(const std::string& inputStr, int divisor1, int divisor2) {
    std::string result;
    for (int i = 0; i < inputStr.length(); i++) {
        if (i % divisor1 == 0 || i % divisor2 == 0) {
            result += inputStr[i];
        }
    }
    return result;
}

void partialRotate(char arr[], int length, int rotation) {
    if (length <= 1) {
        return;  // Nothing to rotate for single-element or empty array
    }

    rotation = rotation % length;  // Handle rotation larger than array length

    // Reverse the first part (rotation)
    for (int i = 0; i < rotation / 2; i++) {
        std::swap(arr[i], arr[rotation - i - 1]);
    }

    // Reverse the second part (length - rotation)
    for (int i = 0; i < (length - rotation) / 2; i++) {
        std::swap(arr[rotation + i], arr[length - i - 1]);
    }

    // Reverse the whole array
    for (int i = 0; i < length / 2; i++) {
        std::swap(arr[i], arr[length - i - 1]);
    }
}

void printEvery3rd(const char arr[], int length) {
    for (int i = 0; i < length; i += 3) {
        std::cout << arr[i];
    }
    std::cout << std::endl;
}

std::string reverseSentence(const std::string& inputStr) {
    std::string reversedStr;
    int end = inputStr.length();

    int start = end;

    while (start >= 0) {
        while (start > 0 && inputStr[start - 1] != ' ') {
            start--;
        }

        reversedStr += inputStr.substr(start, end - start);

        if (start > 0) {
            reversedStr += ' ';
        }


        end = start - 1;
        start = end;
    }

    reversedStr += '\n';

    return reversedStr;
}
std::string sumWindow(const std::string& inputStr, const int window[], int size, int windowSize) {
    std::string result;

    for (int i = 0; i <= size - windowSize; i++) {
        int sum = 0;
        for (int j = 0; j < windowSize; j++) {
            sum += window[j];
        }
        result += inputStr[sum];
    }

    return result;
}



std::string diagonalString(const std::string& inputStr) {
    int n = inputStr.length();
    int m = static_cast<int>(std::sqrt(n));

    // Ensure m is within bounds (m x m matrix)
    if (m * m > n) {
        m--;
    }

    std::string result;

    for (int i = 0; i < m; i++) {
        // Append the diagonal characters
        result += inputStr[i * (m + 1)];
    }

    return result;
}


std::string reverseDiagonalString(const std::string& inputStr) {
    int n = inputStr.length();
    int m = static_cast<int>(std::sqrt(n));

    // Ensure m is within bounds (m x m matrix)
    if (m * m > n) {
        m--;
    }

    std::string result;

    for (int i = 0; i < m; i++) {
        // Append the reverse diagonal characters
        result += inputStr[i * (m + 1) + m];
    }

    return result;
}

std::string transposeString(const std::string& inputStr) {
    int n = inputStr.length();
    int m = static_cast<int>(std::sqrt(n));

    // Ensure m is within bounds (m x m matrix)
    if (m * m > n) {
        m--;
    }

    std::string result;

    for (int col = 0; col < m; col++) {
        for (int row = 0; row < m; row++) {
            // Calculate the index in the original string
            int index = row * m + col;
            result += inputStr[index];
        }
    }

    return result;
}


bool checkInString(const std::string& inputStr, char targetChar, int currentIndex) {
    // Base case: If currentIndex is out of bounds, return false.
    if (currentIndex < 0 || currentIndex >= inputStr.length()) {
        return false;
    }

    // Check if the character at currentIndex matches the target character.
    if (inputStr[currentIndex] == targetChar) {
        return true;
    }

    // Recursive case: Move to the next index and make a recursive call.
    return checkInString(inputStr, targetChar, currentIndex + 1);
}


void multiCheckInString(const std::string& str1, const std::string& str2, int currentIndex) {
     if (currentIndex < 0 || currentIndex >= str1.length()){
        return;
    }

    char currentChar = str1[currentIndex];


    if (!checkInString(str2, currentChar, 0)) {
        // If it's not in the second string, print it.
        std::cout << ">" << currentChar << std::endl;
    }


    multiCheckInString(str1, str2, currentIndex + 1);
}

int main() {
    std::string str1 = "acokpdae";
    std::string str2 = "vtmipksa";

    multiCheckInString(str1, str2, 0);

    return 0;
}


