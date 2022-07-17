// g++ cpp/decode.cpp -o decode
// g++ cpp/decode.cpp -o decode && ./decode src/testcard.qoi out/testcard_cpp.png

#include <iostream>
#include <string>

int main (int argc, char** argv) {
    // std::cout << "decoding" << std::endl;

    // Wrong argument count
    if ((argc <= 1) || (argc > 3)) {
        // throw;
        std::cout << "err" << std::endl;
    }

    // Parse input path
    char* inputPath = argv[1];
    std::cout << inputPath << std::endl;

    // Parse or generate output path
    char* outputPath;
    if (argc == 3) {
        outputPath = argv[2];
        std::cout << outputPath << std::endl;
    } else {
        // generate outputPath
    }

    return 0;
}
