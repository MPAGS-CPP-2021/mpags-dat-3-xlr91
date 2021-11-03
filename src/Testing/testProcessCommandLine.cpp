
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "ProcessCommandLine.hpp"


ProgramSettings ps1{
        false,
        false,
        "",
        "",
        "",
        CipherMode::Encrypt
};

//template
//const std::vector<std::string> cmdLineArgs{"./mpags-cipher", "-h", "-i", "testinput", "-o", "testoutput", "--encrypt", "-k", "4"};

TEST_CASE("Setting help works", "[bool]"){
    const std::vector<std::string> cmdLineArgs1{"./mpags-cipher", "-h", "-i", "testinput", "-o", "testoutput", "--encrypt", "-k", "4"};
    processCommandLine(cmdLineArgs1, ps1);
    REQUIRE(ps1.helpRequested == true);
}


TEST_CASE("Setting versionrequest works", "[bool]"){
    const std::vector<std::string> cmdLineArgs2{"./mpags-cipher", "--version"};
    processCommandLine(cmdLineArgs2, ps1);
    REQUIRE(ps1.versionRequested == true);
}


//can do other tests similarly