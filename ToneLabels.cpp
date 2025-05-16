#include "ToneLabels.h"

namespace TelCoColorCoder {

    std::vector<std::string> MajorColorNames;
    std::vector<std::string> MinorColorNames;

    void InitializeDefaultEnglishLabels() {
        MajorColorNames.clear();
        MajorColorNames.push_back("White");
        MajorColorNames.push_back("Red");
        MajorColorNames.push_back("Black");
        MajorColorNames.push_back("Yellow");
        MajorColorNames.push_back("Violet");

        MinorColorNames.clear();
        MinorColorNames.push_back("Blue");
        MinorColorNames.push_back("Orange");
        MinorColorNames.push_back("Green");
        MinorColorNames.push_back("Brown");
        MinorColorNames.push_back("Slate");
    }

    // Example future use:
    /*
    void InitializeFrenchLabels() {
        MajorColorNames = {"Blanc", "Rouge", "Noir", "Jaune", "Violet"};
        MinorColorNames = {"Bleu", "Orange", "Vert", "Marron", "Ardoise"};
    }
    */
}
