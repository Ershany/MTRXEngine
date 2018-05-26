/*
    Author: Mohamed Kazma
    Description: An implementation of a 3D vector class whoch very benificial for game development
*/

class Vector3D
{
public:
	// Member variables
    float x;											// x position of the vector
    float y;											// y position of the vector
    float z;											// z position of the vector
    
	// Constructors and Destructors
    Vector3D(float x = 0, float y = 0, float z = 0);    // all unused variables will be set to 0
    ~Vector3D();                                        // Destructor

	// Functions
    void Normalize();									// Normalizes a 3DVector
    float Magnitude();									// Finds the Magnitude of a 3DVector
    float MagnitudeSquared();							// Finds the Magnitude squared of a 3DVector
	Vector3D Difference(Vector3D&);					    // Finds the difference Vector between 2 vectors
	float DotProduct(Vector3D&);						// Dot product of 2 3d vectors
	Vector3D CrossProduct(Vector3D&);					// Cross product of 2 3d vectors

    // Operator overloading 
	Vector3D operator+(Vector3D);						// Adding 2 3d vectors
	Vector3D operator+(float);							// Adding a float to a 3d vector
	Vector3D operator+=(Vector3D);						// Adding 2 3d vectors using +=
	Vector3D operator+=(float);							// Adding a float to a 3d vector using +=
	Vector3D operator-(Vector3D);						// Subtracting 2 3d vectors
	Vector3D operator-(float);							// Subtracting a float from a 3d vector 
	Vector3D operator-=(Vector3D);						// Subtracting 2 3d vectors using -=
	Vector3D operator-=(float);							// Subtracting a float from a 3d vector using -= 
	Vector3D operator*(Vector3D);						// Multiplying 2 3d vectors
	Vector3D operator*(float);							// Multiplying a 3d vector by a float
	Vector3D operator*=(Vector3D);						// Multiplying 2 3d vectors using *=
	Vector3D operator*=(float);							// Multiplying a 3d vector by a float using *=
	Vector3D operator/(Vector3D);						// Dividing 2 3d vectors
	Vector3D operator/(float);							// Dividing a 3d vector by a float
	Vector3D operator/=(Vector3D);						// Dividing 2 3d vectors using /=
	Vector3D operator/=(float);							// Dividing a 3d vector by a float using /=

private:

protected: 
};