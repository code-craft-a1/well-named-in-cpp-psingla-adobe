#include <iostream>
#include <assert.h>
#include "ToneLookup.h"
#include "ToneLabels.h"

void testNumberToPair(int pairNumber,
    TelCoColorCoder::MajorColor expectedMajor,
    TelCoColorCoder::MinorColor expectedMinor)
{
    TelCoColorCoder::ColorPair colorPair =
        TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(
    TelCoColorCoder::MajorColor major,
    TelCoColorCoder::MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

extern void PrintReferenceManual();

int main() {
    TelCoColorCoder::InitializeDefaultEnglishLabels();

    // Test valid and invalid pair numbers
    try {
        testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
        testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);
        testNumberToPair(26, TelCoColorCoder::RED, TelCoColorCoder::BLUE); // Invalid pair number
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    // Test valid and invalid color pair to number conversion
    try {
        testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
        testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
        testPairToNumber(static_cast<TelCoColorCoder::MajorColor>(999), TelCoColorCoder::BLUE, 999); // Invalid major color
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    // std::cout << "\nReference Manual:\n";
    // PrintReferenceManual();

    return 0;
}