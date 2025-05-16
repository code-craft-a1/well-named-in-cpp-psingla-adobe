
#include <iostream>
#include "ToneLookup.h"

void PrintReferenceManual() {
    for (int i = 1; i <= TelCoColorCoder::numberOfMajorColors * TelCoColorCoder::numberOfMinorColors; ++i) {
        TelCoColorCoder::ColorPair cp = TelCoColorCoder::GetColorFromPairNumber(i);
        std::cout << i << " : " << cp.ToString() << std::endl;
    }
}
