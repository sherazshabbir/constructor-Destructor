#include <iostream>
using namespace std;
class iphone13
{
	protected:
		int weight;
			double camera;
			double display;
			public:
		iphone13()
		{
			weight=174;
			 camera=12;
			 display =6.1;
			cout<<"Iphone 13 defult constructor "<<endl;
		}
		iphone13(int weight,double camera, double display)
		{
			cout<<"Iphone 13 Peramiterized constructor "<<endl;
		}
		~iphone13()
		{
		}
};
class iphone13pro:public iphone13
{
		protected:
//				int weight;
//			double camera;
//			double display;
			public:
		iphone13pro()
		{
			weight=204;
			 camera=12;
			 display =6.1;
			cout<<"Iphone 13 pro defult constructor "<<endl;
		}
		iphone13pro(int weight,double camera, double display)
		{
			cout<<"Iphone 13 pro Peramiterized constructor "<<endl;
		}
		~iphone13pro()
		{
		}
};
class iphone13promax:public iphone13pro{
		protected:
//				int weight;
//			double camera;
//			double display;
			public:
		iphone13promax()
		{
			weight=240;
			 camera=12;
			 display =6.7;
			cout<<"Iphone 13 pro max defult constructor "<<endl;
		}
		iphone13promax(int weight,double camera, double display)
		{
			cout<<"Iphone 13 pro max Peramiterized constructor "<<endl;
		}
		~iphone13promax()
		{
		}
		
	
};
int main()
{
	iphone13 i13;
	iphone13(172,12,6.1);
	iphone13pro i13pro;
	iphone13pro(204,12,6.7);
	iphone13promax i13promax;
	iphone13promax(240,12,6.7);
	
	return 0;
}

