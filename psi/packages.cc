/*
--== packages.cc ==--
Implementations for `packages.hh`.
*/

#include "packages.hh"
#include <string>
#include <vector>

Package::Package() {
    this->path = "";
    this->name = "";
    this->version = "";
    this->architecture = "";
    this->dependencies = std::vector<std::string>();
    this->files = std::vector<std::string>();
    this->configurationFiles = std::vector<std::string>();
}