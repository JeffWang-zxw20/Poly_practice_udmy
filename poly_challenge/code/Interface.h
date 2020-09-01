#pragma once
#ifndef _IT_
#define _IT_
#include <iostream>
class I_prt
{
	friend std::ostream& operator<< (std::ostream& os,
		const I_prt& obj);
public:
	virtual void print(std::ostream& os) const = 0; 
	virtual ~I_prt() = default;
//or: virtual ~I_prt()~{};
};

//std::ostream& operator<< (std::ostream& os, const I_prt& obj)
//{
//	obj.print(os);
//	return os;
//}


#endif // !_IT_

