#include <stdio.h>

int main() {
    int choice;
    double value, result;

    printf("Unit Converter\n");
    printf("1. Inches to Centimeters\n");
    printf("2. Feet to Meters\n");
    printf("3. Centimeters to Inches\n");
    printf("4. Meters to Feet\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter length in inches: ");
            scanf("%lf", &value);
            result = value * 2.54;
            printf("%.2lf inches = %.2lf centimeters\n", value, result);
            break;
        case 2:
            printf("Enter length in feet: ");
            scanf("%lf", &value);
            result = value * 0.3048;
            printf("%.2lf feet = %.2lf meters\n", value, result);
            break;
        case 3:
            printf("Enter length in centimeters: ");
            scanf("%lf", &value);
            result = value / 2.54;
            printf("%.2lf centimeters = %.2lf inches\n", value, result);
            break;
        case 4:
            printf("Enter length in meters: ");
            scanf("%lf", &value);
            result = value / 0.3048;
            printf("%.2lf meters = %.2lf feet\n", value, result);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
