#include <bits/stdc++.h>
#include "huffman.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
    if (argc != 3)
    {
        cout << "Enter File names : inputFileName compressedFile.huf while executing";
        return 1;
    }
    cout << argv[0] <<" " << argv[1] <<" " << argv[2] << endl;
    Huffman f(argv[1], argv[2]);
    f.compress();
    cout << "File Compressed SuccessFully. Compare the size of compressed file" << endl;
    return 0;
}
