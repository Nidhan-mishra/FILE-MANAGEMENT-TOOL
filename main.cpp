#include <iostream>
#include <fstream>
#include <string>


void writeToFile(const std::string& filename) {
    std::ofstream outFile(filename, std::ios::app); // Open file in append mode
    
    std::string data;
    std::cout << "Enter text to append to the file: ";
    std::getline(std::cin, data); // Read a line of text from the user

    outFile << data << "\n"; 
    std::cout << "Text appended successfully!" << "\n";
    outFile.close(); // Close the file
}

void readFromFile(const std::string& filename) {
    std::ifstream inFile(filename); // Open file in read mode
    
    std::string line;
    std::cout << "File contents:" << "\n";
    while (getline(inFile, line)) { 
        std::cout << line << "\n";
    }

    inFile.close(); // Close the file
}

int main() {
    std::string filename = "test_file.txt"; // File to read/write to

    int choice;
    std::cout << "File INTERACTION: " << "\n";
    std::cout << "1. Append to file" << "\n";
    std::cout << "2. Read from file" << "\n";
    std::cout << "Enter your choice (1  OR 2): ";
    std::cin >> choice;
    std::cin.ignore();

    if (choice == 1) {
        writeToFile(filename); // Call the append function
    }
    else if (choice == 2) {
        readFromFile(filename); // Call the read function
    }
    else {
        std::cout << "Invalid choice!" << "\n";
    }

    return 0;
}
