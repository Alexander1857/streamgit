#define CIRCLE
#ifdef CIRCLE

/*����������*/

class Circle
{
private:
	float radius;//������(� �.)

public:


	Circle();
	void set_r(float);
	Circle(float newradius);



	float get_r();
	float diameter();

	float area();
	float lenght();
};

#endif // CIRCLE
