#include <stdio.h>
#include <math.h>

int main() {
    // Define the predefined angles in degrees
    int angles[] = {0, 30, 45, 60, 90};
    
    printf("Enter an angle in degrees: ");
    int userAngle;
    scanf("%d", &userAngle);

    printf("Angle (Degrees)\tSine\tCosine\tTangent\tSecant\tCosecant\tCotangent\n");

    // Add the user's angle to the predefined angles
    angles[5] = userAngle;

    for (int i = 0; i < 6; i++) {
        int angle = angles[i];
        double radians = angle * M_PI / 180.0; // Convert degrees to radians

        double sine = sin(radians);
        double cosine = cos(radians);
        double tangent = tan(radians);
        
        // Check for special cases where secant, cosecant, and cotangent are undefined
        double secant = (cosine != 0.0) ? 1.0 / cosine : 1.0 / 0.0; // sec(x) = 1/cos(x)
        double cosecant = (sine != 0.0) ? 1.0 / sine : 1.0 / 0.0; // csc(x) = 1/sin(x)
        double cotangent = (tangent != 0.0) ? 1.0 / tangent : 1.0 / 0.0; // cot(x) = 1/tan(x)

        printf("%d\t\t\t%.4lf\t%.4lf\t%.4lf\t%.4lf\t%.4lf\t%.4lf\n", angle, sine, cosine, tangent, secant, cosecant, cotangent);
    }

    return 0;
}

