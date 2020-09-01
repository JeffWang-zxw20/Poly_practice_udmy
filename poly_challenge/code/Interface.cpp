#include "Interface.h"

std::ostream& operator<< (std::ostream& os, const I_prt& obj)
{
	obj.print(os);
	return os;
}


//This error can also occur if you define member functions 
//outside the class declaration in a header file:


//https://docs.microsoft.com/en-gb/cpp/error-messages/tool-errors/linker-tools-error-lnk2005?view=vs-2019