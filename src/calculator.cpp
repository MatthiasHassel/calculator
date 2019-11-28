#include <exception>
#include <iostream>
#include <string>
#include <vector>

float calculate(const std::string& lhs,
                const std::string& rhs,
                const std::string& operand_string)
{
    float flhs = std::stof(lhs);
    float frhs = std::stof(rhs);

    if (operand_string == "+")
        return flhs + frhs;
    else if (operand_string == "-")
        return flhs - frhs;
    else
        return 0;
}

int main(int argc, const char** argv)
{
    ++argv;

    float output = calculate(argv[0], argv[2], argv[1]);

    std::cout << output << "\n";
}
