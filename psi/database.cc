/*
--== database.cc ==--
Implementations for `database.hh`.
*/

#include "database.hh"
#include <fstream>
#include <string>

bool PackageDB::isPackageInstalled(const std::string& packageName, bool exactVersion) {
    std::ifstream db(this->path);

    if (!db) {
        return false; // FIXME: Return an error somehow instead of just `false`
    }

    std::string line
    while (std::getline(db, line)) {
        if (packageName)
    }
}