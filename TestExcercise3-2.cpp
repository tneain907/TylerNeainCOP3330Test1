  #include <iostream>
  #include <iomanip>
  #include <cmath>

  using namespace std;

  int main() {
      const double PI = 3.14159;
      double radius; 
      double height;

      cout << fixed << showpoint << setprecision(2);

      // Prompt and input for radius
      cout << "Enter the radius of the base of the cylinder: ";
      cin >> radius;
      cout << endl;

      // Prompt and input for height
      cout << "Enter the height of the cylinder: ";
      cin >> height;
      cout << endl;

      // Calculate and output the volume
      cout << "Volume of the cylinder = " << PI * pow(radius, 2.0) * height << endl;

      // Calculate and output the surface area
      cout << "Surface area: " << 2 * PI * radius * height + 2 * PI * pow(radius, 2.0) << endl;

      return 0;
 }
