#include "fs.hpp"
#include <dirent.h>

FileList FileList::list_js_files(const char* path) {
    FileList result;
    DIR* dir = opendir(path);
    
    if (!dir) {
        printf("Unable to open directory: %s\n", path);
        return result;
    }

    while (struct dirent* entry = readdir(dir)) {
        std::string filename(entry->d_name);
        if (filename.length() > 3 && 
            filename.substr(filename.length() - 3) == ".js") {
            result.files.push_back(filename);
        }
    }

    closedir(dir);
    return result;
}

size_t FileList::count() const {
    return files.size();
}