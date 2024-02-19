#include <map>
#include <string>
#include <iostream>

int main() {
    std::map<std::string, int> fruitCounts;

    // เพิ่มข้อมูลด้วย operator[]
    fruitCounts["apple"] = 5;

    // เพิ่มข้อมูลด้วย insert
    fruitCounts.insert(std::make_pair("banana", 3));

    // เพิ่มข้อมูลด้วย emplace (C++11)
    fruitCounts.emplace("cherry", 2);

    // การเข้าถึงข้อมูล
    std::cout << "Apples: " << fruitCounts["apple"] << std::endl;

    // การลบข้อมูล
    fruitCounts.erase("banana");

    // การวนซ้ำผ่าน map
    for(const auto& pair : fruitCounts) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
