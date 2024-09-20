#include <string>
#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    std::string filename;
    std::string s1;
    std::string s2;
    std::string outfile;
    std::string line;
    size_t position;

    if (ac != 4)
    {
        std::cerr << "Invalid argument count" << std::endl;
        return (1);
    }
    for (int i = 1; i < 4; i++)
    {
        if (std::string(av[i]).empty())
        {
            std::cerr << "Empty argument" << std::endl;
            return (1);
        }
    }

    filename = av[1];
    s1 = av[2];
    s2 = av[3];
    outfile = filename + ".replace";

    std::ifstream file(filename.c_str());
    if (!file.is_open())
    {
        std::cerr << "Error opening file: " << filename << std::endl;
        return (1);
    }

    std::ofstream out(outfile.c_str());
    if (!out.is_open())
    {
        std::cerr << "Error creating output file: " << outfile << std::endl;
        file.close();
        return (1);
    }

    while (std::getline(file, line))
    {
        while ((position = line.find(s1)) != std::string::npos)
        {
            out << line.substr(0, position) << s2;
            line = line.substr(position + s1.length());
        }
        out << line << std::endl;
    }

    file.close();
    out.close();
    std::cout << "File has been processed and saved as: " << outfile << std::endl;
    return (0);
}
