/*
--== packages.hh ==--
This header handles the common operations with packages:
    - Installation
    - Removal
    - Purging
Implementations in `packages.cc`.
*/

#ifndef PACKAGES_HH
#define PACKAGES_HH

#include <string>
#include <vector>

// A package.
class Package {
    public:
        // The name of the package.
        std::string name;

        // The version number of the package in semantic versioning syntax.
        std::string version;

        // The architecture the binary/ies are for.
        std::string architecture;

        // The dependencies for this package.
        std::vector<std::string> dependencies;

        // Create a new Package.
        Package(const std::string& name,
            const std::string& version,
            const std::string& architecture,
            std::vector<std::string> dependencies) :
            name(name), version(version),
            architecture(architecture), dependencies(dependencies) {}
};

#endif // PACKAGES_HH