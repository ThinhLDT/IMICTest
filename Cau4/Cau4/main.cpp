#include<stdio.h>
#include<string.h>
#include<math.h>
//typedef enum truonghop_enum { VoNghiem, NghiemKep, NghiemPhanBiet }truonghop_t;
class phuongtrinhbac2 {
private:
	float a;
	float b;
	float c;
	//truonghop_t truonghop;
	//float delta;
	//float truonghop;
	float x1, x2;
public:
	

	void set_a(float value)
	{
		a = value;
	}

	void set_b(float value)
	{
		b = value;
	}
	void set_c(float value)
	{
		c = value;
	}


	float get_a()
	{
		return this->a;// khong this cung duoc
	}

	float get_b()
	{
		return this->b;
	}
	float get_c()
	{
		return this->c;
	}
	
	float get_delta()
	{
		return (b * b) - (4 * a * c);
	}
	
};
void main()
{
	float delta;
	phuongtrinhbac2 y;
	y.set_a(1);
	y.set_b(2);
	y.set_c(3);
	float delta = y.get_delta():
		if (delta < 0)
		{
			printf()

		}
		else if (delta == 0)
		{
			
			x1 = x2 = (-b) / (2 * a);
		}
		else
		{
			truonghop = 2;
			x1 = ((-b) - sqrt(delta)) / (2 * a);
			x2 = ((-b) + sqrt(delta)) / (2 * a);
		}
	


}