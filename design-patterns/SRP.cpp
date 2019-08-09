//
// Created by jaco.ryu on 2019-08-06.
//

#include <fstream>
#include <string>
#include <vector>

struct Journal {

    std::string title;
    std::vector<std::string> entries;

    explicit Journal(const std::string & title) : title{title} {}
    void add(const std::string& entry) { entries.push_back(entry); }

};

struct PersistenceManager {
    static void save(const Journal& j, const std::string& filename) {
        std::ofstream ofs(filename);
        for (auto& s : j.entries) ofs << s << std::endl;
    }
};

int main() {

    Journal journal("My Journal");
    journal.add("First entry");
    journal.add("Second entry");
    journal.add("Third entry");

    PersistenceManager().save(journal, "/Users/jaco.ryu/CLionProjects/effective-cpp-example/journal.txt");

    return 0;

}