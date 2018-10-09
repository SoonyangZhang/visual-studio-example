#include "common.h"
#include <iostream>
using namespace std;
namespace zsy {
	void Shit::Print(std::string name){
#if defined CONDITION_1
		std::cout <<"condition_1 " <<name << std::endl;
#else
		std::cout << "condition_2 " << name << std::endl;
#endif
		
	}
}
