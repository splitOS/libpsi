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
        // The path to the package file, if this package is from a package file.
        std::string path; // TODO: Add to constructor

        // The name of the package.
        std::string name;

        // The version number of the package in semantic versioning syntax.
        std::string version;

        // The architecture the binary/ies are for.
        std::string architecture;

        // The dependencies for this package.
        std::vector<std::string> dependencies;

        // The files this package will install. Directories will be created.
        std::vector<std::string> files;

        // The configuration files/directories the package will use. Directories will be created.
        std::vector<std::string> configurationFiles;

        // Create a new `Package` object.
        Package(const std::string& name, const std::string& version,
            const std::string& architecture, std::vector<std::string> dependencies,
            std::vector<std::string> files, std::vector<std::string> configurationFiles) :
            name(name), version(version),
            architecture(architecture), dependencies(dependencies),
            files(files), configurationFiles(configurationFiles) {}

        // Install this package to the system.
        bool install();

        // Remove this package from the system.
        bool remove();
};

#endif // PACKAGES_HH