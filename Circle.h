#define CIRCLE
#ifdef CIRCLE

/*Окружность*/

class Circle
{
private:
	float radius;//радиус(в м.)

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
