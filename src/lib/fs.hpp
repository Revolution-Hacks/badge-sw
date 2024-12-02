#pragma once
#include <vector>
#include <string>

class FileList {
public:
    std::vector<std::string> files;
    static FileList list_js_files(const char* path);
    size_t count() const;
};