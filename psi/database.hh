/*
--== database.hh ==--
Access and use the package database.
Implementations in `database.cc`.
*/

#ifndef DATABASE_HH
#define DATABASE_HH

#include <string>

// The path to the system package database.
const std::string defaultDatabasePath = "/var/lib/psi/packagedb";

// A package database.
class PackageDB {
    public:
        // The path to the database for use.
        std::string path;

        // Check if a package is installed.
        bool isPackageInstalled(const std::string& packageName, bool exactVersion = false);

        PackageDB(const std::string& path) : path(path) {}
};

#endif // DATABASE_HH