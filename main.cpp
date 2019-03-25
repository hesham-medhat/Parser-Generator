#include <iostream>
#include <string>
#include <fstream>

#include "LexicalAnalysis/LexicalAnalyzerGenerator.h"
#include "LexicalAnalysis/LexicalAnalyzer.h"

int main() {
    std::cout << "Rules input file relative path: " << std::endl;

    std::string inputRulesFilePath="C:\\Users\\Ahmed\\Desktop\\text.txt";
   // std::cin >> inputRulesFilePath; // Read input file path
    std::ifstream inputRulesStream(inputRulesFilePath);

    std::cout << "Program file relative path: " << std::endl;

    std::string programFilePath="C:\\Users\\Ahmed\\Desktop\\text2.txt";
 //   std::cin >> programFilePath; // Read input file path

    // Build lexical analyzer
    std::cout << "Starting Lexical Analyzer Generator..." << std::endl;
    LexicalAnalyzerGenerator lexicalAnalyzerGenerator(inputRulesStream);
    std::cout << "Generating Lexical Analyzer..." << std::endl;
    LexicalAnalyzer lexicalAnalyzer = lexicalAnalyzerGenerator.buildLexicalAnalyzer();

    std::cout << "Analyzing Program..." << std::endl;
    lexicalAnalyzer.analyzeCompleteProgram(programFilePath);

    return 0;
}
