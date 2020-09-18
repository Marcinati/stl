#pragma once
#include <string>

enum class ErrorCode {
    OK,
    BadCharacter,
    BadFormat,
    DivideBy0,
    SqrtOfNegativeNumber,
    ModuleOfNonIntegerValue,
};

void startCalculate();
void printWelcomeScreen();
void calculate();
void printGoodByeScreen();

ErrorCode process(std::string input, double* out);
