#include <iostream>
int main()
{
	int bigNum;
	int bigNumTwo;
	int gistArray[5];
	for (int iter = 0; iter < 5; iter++)
	{
		bigNum = gistArray[0];
		bigNumTwo = gistArray[0];
		std::cin >> gistArray[iter];
		if (gistArray[iter] > bigNum)
		{
			bigNum = gistArray[iter];
			continue;
		}
		if (gistArray[iter] < bigNum)
			if (gistArray[iter] > bigNumTwo)
				bigNumTwo = gistArray[iter];
	}
	std::cout << bigNum << std::endl;
	std::cout << bigNumTwo << std::endl;
	int biggestNum = bigNum + bigNumTwo;
	std::cout << biggestNum << std::endl;
	system("pause");
}