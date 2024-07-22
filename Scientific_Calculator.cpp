#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double add()
{ // function with the name of "add" to add two numbers.
    cout << "enter your numbers " << endl;
    int a, b;
    cin >> a >> b;
    return a + b;
}
double subtract()
{ // function with the name of subtract to subtract second number from first.
    int a, b;
    cout << "enter your numbers " << endl;
    cin >> a >> b;
    return a - b;
}
double multiply()
{ // function with the name of multiply to multiply two numbers
    int a, b;
    cout << "enter your numbers " << endl;
    cin >> a >> b;
    return a * b;
}
double divide()
{ // funtion with the name of divide to divide two numbers
    double a, b;
    cout << "enter your numbers " << endl;
    cin >> a >> b;
    if (b == 0)
    {
        cout << "math error" << endl;
    }
    return a / b;
}

int factorial(int n)
{ // function with the name of factorial to find the factorial of a number
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

double sqrt()
{
    double num;
    cout << "Enter a number: ";
    cin >> num;
    double squareRooot = sqrt(num);
    double SquareRoot(double num);
    return sqrt(num);
}
double Exp()
{
    double base, exponent;
    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    return pow(base, exponent);
}

void solveQuadratic()
{
    double a, b, c;

    // Input coefficients from the user
    cout << "Enter coefficient a: ";
    cin >> a;

    cout << "Enter coefficient b: ";
    cin >> b;

    cout << "Enter coefficient c: ";
    cin >> c;
    // Calculate the discriminant
    double discriminant = b * b - 4 * a * c;

    // Check if the discriminant is positive, negative, or zero
    if (discriminant > 0)
    {
        // Two real and distinct roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and distinct.\n";
        cout << "Root 1: " << root1 << "\n";
        cout << "Root 2: " << root2 << "\n";
    }
    else if (discriminant == 0)
    {
        // One real root (double root)
        double root = -b / (2 * a);
        cout << "Roots are real and equal.\n";
        cout << "Root: " << root << "\n";
    }
    else
    {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(abs(discriminant)) / (2 * a);
        cout << "Roots are complex and conjugate.\n";
        cout << "Root 1: " << realPart << " + " << imaginaryPart << "i\n";
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i\n";
    }
}

double degToRad(double degree)
{
    return degree * (M_PI / 180.0);
}
double radtodeg(double z)
{
    return ((z * 180) / 3.141592654);
}

void calculateSin()
{
    double angle;
    cout << "Enter an angle in degrees: ";
    cin >> angle;
    if (angle == -360 || angle == -180 || angle == 180 || angle == 360)
    {
        cout << "Result: 0 ";
    }
    else
    {
        double result = sin(degToRad(angle));
        cout << "Result: " << result;
    }
}

void calculateCos()
{
    double angle;
    cout << "Enter an angle in degrees: ";
    cin >> angle;

    if (angle == -270 || angle == -90 || angle == 90 || angle == 270)
    {
        cout << "Result: 0 ";
    }
    else
    {
        double result = cos(degToRad(angle));
        cout << "Result: " << result;
    }
}

double calculateTan()
{
    double angle;
    cout << "Enter an angle in degrees: ";
    cin >> angle;
    if (angle == -270 || angle == -90 || angle == 90 || angle == 270)
    {
        cout << "Maths error: Result is undefined\n";
    }
    else if (angle == -360 || angle == -180 || angle == 0 || angle == 180 || angle == 360)
    {
        cout << "Result: 0 ";
    }
    else
    {
        double result = tan(degToRad(angle));
        cout << "Result: " << result;
    }
}
double calculateCot()
{
    double angle;
    cout << "Enter an angle in degrees: ";
    cin >> angle;

    double result = 1.0 / tan(degToRad(angle));
    if (angle == -360 || angle == -180 || angle == 0 || angle == 180 || angle == 360)
    {
        cout << "Maths error: Result is undefined\n";
    }
    else if (angle == -270 || angle == -90 || angle == 90 || angle == 270)
    {
        cout << "Result: 0";
    }
    else if (isnan(result) || isinf(result))
    {
        cout << "Maths error: Result is undefined\n";
    }
    else
    {
        cout << "Result: " << result;
    }
}
double calculateSec()
{
    double angle;
    cout << "Enter an angle in degrees: ";
    cin >> angle;

    double result = 1.0 / cos(degToRad(angle));

    if (angle == -90 || angle == 90 || angle == 270)
    {
        cout << "Maths error: Result is undefined\n";
    }
    else if (isnan(result) || isinf(result))
    {
        cout << "Maths error: Result is undefined\n";
    }
    else
    {
        cout << "Result: " << result;
    }
}
double calculateCosec()
{
    double angle;
    cout << "Enter an angle in degrees: ";
    cin >> angle;

    double result = 1.0 / sin(degToRad(angle));
    if (angle == -360 || angle == -180 || angle == 0 || angle == 180 || angle == 360)
    {
        cout << "Maths error: Result is undefined\n";
    }
    else if (isnan(result) || isinf(result))
    {
        cout << "Maths error: Result is undefined\n";
    }
    else
    {
        cout << "Result: " << result;
    }
}
void calculateNaturalLog()
{
    double x;
    cout << "Enter the value: ";
    cin >> x;

    cout << "Natural Logarithm of " << x << " is: " << log(x);
}
double calculateCommonLog()
{
    double x;
    cout << "Enter the value: ";
    cin >> x;
    cout << "Common Logarithm of " << x << " is: " << log10(x);
}

// Function to calculate binary logarithm (log base 2)
double calculateBinaryLog()
{
    double x;
    cout << "Enter the value: ";
    cin >> x;
    cout << "Binary Logarithm of " << x << " is: " << log2(x);
}

void calculateSquare()
{
    double n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Square: " << n * n;
}
void calculateCube()
{
    double n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Cube: " << n * n * n;
}
void calculateSquareRoot()
{
    double n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Square Root: " << sqrt(n) << endl;
}
void calculateCubeRoot()
{
    double n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Cube Root: " << cbrt(n) << endl;
}

// Function to calculate nth root
void calculateNthRoot()
{
    double num;
    int n;
    cout << "Enter the value of n for Nth Root: ";
    cin >> n;
    cout << "Enter a number: ";
    cin >> num;
    cout << n << "th Root: " << pow(num, 1.0 / n) << endl;
}
// Function to calculate Arcsin
void calculateArcsin()
{
    double angle;
    cout << "Enter the value :";
    cin >> angle;
    if (angle >= -1 && angle <= 1)
    {
        cout << fixed << setprecision(2) << endl;
        cout << radtodeg(asin(angle)) << "degree";
    }
    else
    {
        cout << "The given angle is not in the valid range [-1, 1]";
    }
}
// Function to calulate Arccos
void calculateArccos()
{
    double angle;
    cout << "Enter the value :";
    cin >> angle;
    if (angle >= -1 && angle <= 1)
    {
        cout << fixed << setprecision(2) << endl;

        cout << radtodeg(acos(angle)) << "degree";
    }
    else
    {
        cout << "The given angle is not in the valid range [-1, 1]";
    }
}
// Function to calculate Arctan
void calculateArctan()
{
    double angle;
    cout << "Enter the value :";
    cin >> angle;
    cout << fixed << setprecision(2) << endl;

    cout << radtodeg(atan(angle)) << "degree";
}
unsigned long long permutation(int n, int r)
{
    if (n < r)
    {
        return 0;
    }
    return factorial(n) / factorial(n - r);
}

unsigned long long combination(int n, int r)
{
    if (n < r)
    {
        return 0;
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{

    int t, r;
    cout << endl;

    cout << "**********   888888     8888      88         8888888    88    88   88        88888888  8888888888   8888888888   888888    ***********   " << endl;
    cout << "*********   8888       888 888    88        88          88    88   88        88    88      88       88      88  88    88    ********** " << endl;
    cout << "*******     88        88    88    88       88           88    88   88        88    88      88       88      88  8888888      *********  " << endl;
    cout << "*******     88        88888888    88       88           88    88   88        88888888      88       88      88  88 888       *********   " << endl;
    cout << "********    888      888    888   88        88          88    88   88        88    88      88       88      88  88  888     **********  " << endl;
    cout << "**********   88888   888     888  88888888   8888888    88888888   88888888  88    88      88       8888888888  88    888  ***********  " << endl;
    cout << "______________________________________________________________________________________________________________________________________\n";
    cout << "|01|       ADDITION                |02|         SUBTRACTION       |03|     MULTIPLICATION        |04|          DIVISION              |\n";
    cout << "|**|-------------------------------|**|---------------------------|**|---------------------------|**|------------------------------- |\n";
    cout << "|05|       FACTORIAL               |06|        SQUARE ROOT        |07|       EXPONENT            |08|        QUADRATIC               |\n";
    cout << "|**|-------------------------------|**|---------------------------|**|---------------------------|**|--------------------------------|\n";
    cout << "|09|        SIN()                  |10|        COSINE()           |11|         TANGENT()         |12|         COTANGENT              |\n";
    cout << "|**|-------------------------------|**|---------------------------|**|---------------------------|**|--------------------------------|\n";
    cout << "|13|        SECANT()               |14|        COSECANT()         |15|         LOG BASE e        |16|        LOG BASE 10             |\n";
    cout << "|**|-------------------------------|**|---------------------------|**|---------------------------|**|--------------------------------|\n";
    cout << "|17|       LOG BASE-2              |18|         SQUARE            |19|           CUBE            |20|         SQUARE ROOT            |\n";
    cout << "|**|-------------------------------|**|---------------------------|**|---------------------------|**|--------------------------------|\n";
    cout << "|21|----------CUBE ROOT------------|22|---------Nth ROOT----------|23|         ARC_SIN()         |24|         ARC_COSINE()           |\n";
    cout << "|**|-------------------------------|**|---------------------------|**|---------------------------|**|--------------------------------|\n";
    cout << "|25|        ARC_TANGENT()          |26|      PERMUTATION()        |27|       COMBINATION()       |28|                                |\n";
    cout << "|**|_______________________________|**|___________________________|**|___________________________|**|________________________________|\n";

    int operation;
    do
    {
        cout << endl
             << endl
             << "CHOOSE AN OPERATION: ";

        cin >> operation;

        switch (operation)
        {
        case 1:
            cout << "Result is " << add();
            break;
        case 2:
            cout << "Result is " << subtract();
            break;
        case 3:
            cout << "Result is " << multiply();
            break;

        case 4:
            cout << "Result is " << divide();
            break;

        case 5:
            int num;
            cout << "Enter a non-negative integer: ";
            cin >> num;
            if (num < 0)
            {

                cout << "Please enter a non-negative integer." << endl;
            }
            else
            {

                unsigned long long result = factorial(num);
                cout << "Factorial of " << num << " = " << result << endl;
            }
            break;

        case 6:
            cout << sqrt() << endl;
            break;
        case 7:
            cout << Exp() << endl;
            break;
        case 8:
            solveQuadratic();
            break;

        case 9:
            calculateSin();
            break;

        case 10:
            calculateCos();
            break;
        case 11:
            calculateTan();
            break;
        case 12:
            calculateCot();
            break;
        case 13:
            calculateSec();
            break;
        case 14:
            calculateCosec();
            break;
        case 15:
            calculateNaturalLog();
            break;
        case 16:
            calculateCommonLog();
            break;
        case 17:
            calculateBinaryLog();
            break;

        case 18:
            calculateSquare();
            break;
        case 19:
            calculateCube();
            break;

        case 20:
            calculateSquareRoot();
            break;
        case 21:
            calculateCubeRoot();
            break;

        case 22:
            calculateNthRoot();
            break;
        case 23:
            calculateArcsin();
            break;
        case 24:
            calculateArccos();
            break;
        case 25:
            calculateArctan();
            break;
        case 26:

            cout << "Enter value for n: ";
            cin >> t;
            cout << "Enter value for r: ";
            cin >> r;
            cout << "Permutation (nPr) is : " << permutation(t, r) << endl;
            break;
        case 27:

            cout << "Enter value for n: ";
            cin >> t;
            cout << "Enter value for r: ";
            cin >> r;
            cout << "Combination (nCr) is : " << combination(t, r) << endl;
            break;

        default:
            cout << "invalid number!";
            break;
        }

    } while (operation != 0);

    return 0;
}
