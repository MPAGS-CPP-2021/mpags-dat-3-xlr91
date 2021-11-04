#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "CaesarCipher.hpp"
#include <iostream>



//test to move string to the key thing
std::string cipherkeytest = "4";
CaesarCipher cipher{cipherkeytest};

TEST_CASE("string conversion works", "[string to int]"){
    REQUIRE(cipher.showKey() == 4);
}

//test for encryption
std::string inputText = "ABC";
std::string outputText{cipher.applyCipher(inputText, CipherMode::Encrypt)};
std::string trueOutputText = "EFG";

TEST_CASE("Encrypting Works", "[math]"){
    for (size_t i = 0; i < outputText.size(); i++){
        REQUIRE(outputText[i] == trueOutputText[i]);
    }
}

//can do something similar for decryption, cant do it due to time constraints :/