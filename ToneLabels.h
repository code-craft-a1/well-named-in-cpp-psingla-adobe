#ifndef TONE_LABELS_H
#define TONE_LABELS_H

#include <vector>
#include <string>

namespace TelCoColorCoder {

    extern std::vector<std::string> MajorColorNames;
    extern std::vector<std::string> MinorColorNames;

    void InitializeDefaultEnglishLabels();

    // Future:
    // void InitializeFrenchLabels();
    // void InitializeHindiLabels();
}

#endif
