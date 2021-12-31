#include "catch.hpp"
#include <map>
#include <memory>
#include "../Unit/Unit.hpp"


TEST_CASE("map", "[map]") {
    std::map<std::string, std::unique_ptr<Unit>> spellBook;
    
    spellBook.emplace("Name1", std::unique_ptr<Unit>(new Unit("1", 10, 10)));
}

