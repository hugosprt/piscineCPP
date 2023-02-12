#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
  if (argc != 4) {
    std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
    return 1;
  }

  std::string filename = argv[1];
  std::string s1 = argv[2];
  std::string s2 = argv[3];

  std::ifstream input(filename.c_str());
  if (!input.is_open()) {
    std::cerr << "Failed to open file: " << filename << std::endl;
    return 1;
  }

  std::string output_filename = filename + ".replace";
  std::ofstream output(output_filename.c_str());
  if (!output.is_open()) {
    std::cerr << "Failed to open file: " << output_filename << std::endl;
    return 1;
  }

  std::string line;
  while (std::getline(input, line)) {
    std::string new_line;
    std::string::size_type pos = 0;
    std::string::size_type last_pos = 0;
    while ((pos = line.find(s1, pos)) != std::string::npos) {
      new_line += line.substr(last_pos, pos - last_pos);
      new_line += s2;
      pos += s1.length();
      last_pos = pos;
    }
    new_line += line.substr(last_pos);
    output << new_line << std::endl;
  }

  input.close();
  output.close();
  return 0;
}
