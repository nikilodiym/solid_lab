#ifndef S_H
#define S_H

namespace SingleResponsibility
{
	class Pencil
	{
	private:
		char * color = nullptr;
		char * brand = nullptr;
		int length = 0;
		int width = 0;
		int height = 0;
	public:
		//GOOD: Draw and write are two different responsibilities of a pencil
		void draw()
		{
			//code
		}
		void write()
		{
			//code
		}

		//WARNING: Fry is not a responsibility of a pencil
		void fry()
		{
			//code
		}
	};
}

#endif // S_H

