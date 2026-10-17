#include <iostream>
#include <filesystem>
#include <string>
#include <cstdlib>

using namespace std;
namespace fs = std::filesystem;

int main(){

    string startPath = "";
    bool found = false;

   
    char* homeDir = getenv ("HOME");
    if (homeDir != nullptr) startPath = homeDir;
    if (startPath.empty()) startPath = ".";

    cout << "\nStarting Directory: " << startPath << "\n\n";
    
    string userQuery;
    cout << "Enter Filename To Search: ";
    cin >> userQuery;
    cout << "Searching...\n";

    // The actual searching part
    try{
        for (const auto& entry: fs::recursive_directory_iterator(startPath, fs::directory_options::skip_permission_denied)){
            if(entry.is_regular_file()){
                string fullName = entry.path().filename().string();
                string stemName = entry.path().stem().string();

                if (fullName == userQuery || stemName == userQuery){
                    cout << "File is found " <<entry.path().string() << endl;
                    found = true;
                }
            }
        }
    }

    catch (const fs::filesystem_error& e) {
            cout << "\nUnable to search inside protected system folders, skipping them\n";
    }
    if (!found) cout << "\n No Matching Files Found!"<< endl;

return 0;
    


}
