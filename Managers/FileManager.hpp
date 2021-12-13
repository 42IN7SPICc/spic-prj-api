#ifndef SPIC_FILEMANAGER_HPP
#define SPIC_FILEMANAGER_HPP

#include "../Structs/FolderFile.hpp"

#include <string>
#include <vector>

namespace spic
{
    /**
     * @brief Manager for interacting with the filesystem.
     */
    class FileManager
    {
        public:
            /**
             * @brief Load the contents of a file and return it as a string.
             * @param file The file to load.
             * @return The content of the file.
             */
            static std::string Load(const std::string& file);

            /**
             * @brief Save a contents to a file.
             * @param file The file to save to.
             * @param contents The contents to put in the file.
             */
            static void Save(const std::string& file, const std::string& contents);

            /**
             * @brief List all the files in a folder.
             * @param path The folder to list.
             * @param extension The file extension the search for.
             * @return A list of matching files inside a folder.
             */
            static std::vector<FolderFile> GetFolderFiles(const std::string& path, const std::string& extension);
    };
}

#endif //SPIC_FILEMANAGER_HPP
