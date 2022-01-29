#include <iostream>	

void DecimalToBinary(int n) 
{
    int binaryNumber[100], num = n;
    int i = 0;
    while (n > 0) 
    {
        binaryNumber[i] = n % 2;
        n = n / 2;
        i++;
    }
    std::cout << "Binary form of " << num << " is ";
    for (int j = i - 1; j >= 0; j--)
        std::cout << binaryNumber[j];
    std::cout << std::endl;
}

int BinaryToDecimal(std::string str)
{
    std::string n = str;
    int val = 0;
    int temp = 1;
    for (int i = n.length() - 1; i >= 0; i--) {
        if (n[i] == '1')
        {
            val += temp;
        }
        temp = temp * 2;
    }
    return val;
}

int main()
{
	std::string binary_number;
    int decimal = 0;
	std::cout << "Enter a binary number: ";
	std::cin >> binary_number;

    decimal = BinaryToDecimal(binary_number);
	std::cout << "Number in Decimal is: " << decimal << std::endl;

    system("cls");

    int x = 0;
    std::cout << "Enter decimal: ";
    std::cin >> x;

    DecimalToBinary(x);

	return 0;
}