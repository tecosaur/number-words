// Loop through chcracters in string

std::string str = ???;
for(char& c : str) {
    do_things_with(c);
}


// read through lines

#include <sstream>
#include <string>
int main() {
    std::istringstream stream {
      "This stream\n"
      "contains many\n"
      "lines.\n"
    };
    std::string line;
    while (std::getline(stream, line)) {
        // Process line
    }
}
