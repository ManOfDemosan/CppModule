#include <iostream>
#include "Array.hpp"
#define MAX_VAL 10
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    std::cout << "====태초에 넘버와 미러가 있었어요======" << std::endl << std::endl << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout << "====미러와 넘버의 비교중..======" << std::endl;
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    // out of range minus
    try
    {
        std::cout << "====unsigned int 인데 무슨 MINUS여======" << std::endl;
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //out of range max
    try
    {
        std::cout << "===== 최대값 := null값 !!MAX!!=====" << std::endl;
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "=======자~ 랜덤값 나갑니다=======" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
        std::cout << numbers[i] << std::endl;
    }
    delete [] mirror;
    return 0;
}


// 이뻐보이는 main문
// int main (void)
// {
// 	Array<int> iArray(5);
// 	std::cout << "size : " << iArray.size() << std ::endl;
// 	for (int i = 0; i < 5; i++)
// 		iArray[i] = i + 1;
// 	for (int i = 0; i < 5; i++)
// 		std::cout << iArray[i] << std::endl;

// 	try
// 	{
// 		std::cout << iArray[-1] << std::endl;
// 		// std::cout << iArray[6] << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}

// 	std::cout << "=============================" << std::endl;

// 	Array<int> iArray2(iArray);
// 	for (int i = 0; i < 5; i++)
// 		std::cout << "iArray[" << i << "] = " << iArray[i] << " iArray2[" << i << "]= " << iArray2[i] << std::endl;
// 	std::cout << "iArray's address : " << iArray.getArray() << std::endl;
// 	std::cout << "iArray2's address : " << iArray2.getArray() << std::endl;
	
// }