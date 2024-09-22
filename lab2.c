1.to find the max btw 2 no's
#include <stdio.h>

int main() {
    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        max = a;
    } else {
        max = b;
    }
    printf("The maximum between %d and %d is %d\n", a, b, max);

    return 0;
}
2.to find the max btw 3 no's
#include <stdio.h>

int main() {
    int a, b, c, max;
    printf("Enter two numbers: ");
    scanf("%d %d %d", &a, &b,&c);
    if (a>b && a>c){
        max = a;
    } else if (b>a,b>c) {
        max = b;
    }
    else {
        max = c;
    }
    
    printf("The maximum between %d, %d and %d is %d\n", a, b, c, max);

    return 0;
}
3.to check the number is positive or negative orzero
#include <stdio.h>

int main() {
    int a;
    printf(" Enter value of a: ");
    scanf("%d", &a);
    if (a>0){
        printf("a is positive");
    } 
    else if (a<0) {
        printf("a is negative");
    
    }
    else {
        printf("a is zero");
}
    return 0;
}
4.to check the number is divisible by 5 or 11
#include <stdio.h>

int main() {
    int a;
    printf(" Enter value of a: ");
    scanf("%d", &a);
    if (a%5==0 && a%11==0){
        printf("a is divisible by both 5 and 11");
    } 
    else {
        printf("a is not divisible by both 5 and 11");
}
    return 0;
}
5.to find number is even or odd
#include <stdio.h>

int main() {
    int a;
    printf(" Enter value of a: ");
    scanf("%d", &a);
    if (a%2==0){
        printf("a is even");
    } 
    else {
        printf("a is odd");
}
    return 0;
}
6.to find a year is leap year or not
#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } 
    else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
7.to check a character is aplabet or not
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is an alphabet.\n", ch);
    } 
    else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}
8.to input a alphabet to check it is vowel or constant
#include <stdio.h>

int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c is a vowel.\n", ch);
        }
        else {
            printf("%c is a consonant.\n", ch);
        }
    } 
    else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}
9.to check it is alphabet or digit or special charcter
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is an alphabet.\n", ch);
    } 
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    }
    else {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}
10.to input week number and print weekday
#include <stdio.h>

int main() {
    int weekNumber;
    printf("Enter week number (1-7): ");
    scanf("%d", &weekNumber);
    switch (weekNumber) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid week number. Please enter a number between 1 and 7.\n");
            break;
    }

    return 0;
}
11.to print month number and no.of days in month
include <stdio.h>

int main() {
    int monthNumber;
    printf("Enter month number (1-12): ");
    scanf("%d", &monthNumber);
    switch (monthNumber) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            printf("Month: %d - 31 days\n", monthNumber);
            break;
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            printf("Month: %d - 30 days\n", monthNumber);
            break;
        case 2:  // February
            printf("Month: %d - 28 or 29 days\n", monthNumber);
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
            break;
    }

    return 0;
}
12.to count total no.of notes in given amount
#include <stdio.h>

int main() {
    int amount;
    int notes100, notes50, notes20, notes10, notes5,notes1;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    notes100 = amount / 100;
    amount %= 100;

    notes50 = amount / 50;
    amount %= 50;

    notes20 = amount / 20;
    amount %= 20;

    notes10 = amount / 10;
    amount %= 10;

    notes5 = amount / 5;
    amount %= 5;

    notes1 = amount / 1;
    amount %= 1;
    printf("Total notes required:\n");
    printf("100: %d\n", notes100);
    printf("50: %d\n", notes50);
    printf("20: %d\n", notes20);
    printf("10: %d\n", notes10);
    printf("5: %d\n", notes5);
    printf("1: %d\n", notes1);

    return 0;
}
13.to input angles and check the traingle is vaild or not
     #include <stdio.h>

int main() {
    float angle1, angle2, angle3;
    printf("Enter the first angle: ");
    scanf("%f", &angle1);
    printf("Enter the second angle: ");
    scanf("%f", &angle2);
    printf("Enter the third angle: ");
    scanf("%f", &angle3);
    if (angle1 > 0 && angle2 > 0 && angle3 > 0 && (angle1 + angle2 + angle3) == 180) {
        printf("The angles form a valid triangle.\n");
    } 
    else {
        printf("The angles do not form a valid triangle.\n");
    }

    return 0;
}
14.to input all the sides and check it is traingle or not
int main() {
    float side1, side2, side3;
    printf("Enter the length of the first side: ");
    scanf("%f", &side1);
    printf("Enter the length of the second side: ");
    scanf("%f", &side2);
    printf("Enter the length of the third side: ");
    scanf("%f", &side3);
    if (side1 + side2 > side3 && 
        side1 + side3 > side2 && 
        side2 + side3 > side1) {
        printf("The sides form a valid triangle.\n");
    } 
    else {
        printf("The sides do not form a valid triangle.\n");
    }

    return 0;
}

15.to check the traingle is equilateral or isoceles or scalen
#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the length of the first side: ");
    scanf("%f", &side1);
    printf("Enter the length of the second side: ");
    scanf("%f", &side2);
    printf("Enter the length of the third side: ");
    scanf("%f", &side3);
    if (side1 + side2 > side3 && 
        side1 + side3 > side2 && 
        side2 + side3 > side1) {
        
        if (side1 == side2 && side2 == side3) {
            printf("The triangle is equilateral.\n");
        } 
        else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("The triangle is isosceles.\n");
        } 
        else {
            printf("The triangle is scalene.\n");
        }
    } 
    else {
        printf("The sides do not form a valid triangle.\n");
    }

    return 0;
}
17.to find all roots of quadratic equation
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2;
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b * b - 4 * a * c ;
    if (a == 0) {
        printf("Coefficient 'a' cannot be zero for a quadratic equation.\n");
    } 
    else if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } 
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("The root is real and repeated.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } 
    else {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("The roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}
18.to calcute profit or loss
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, amount;

    
    printf("Enter the cost price (CP): ");
    scanf("%f", &costPrice);
    printf("Enter the selling price (SP): ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        amount = sellingPrice - costPrice;
        printf("You made a profit of %.2f\n", amount);
    } 
    else if (costPrice > sellingPrice) {
        amount = costPrice - sellingPrice;
        printf("You incurred a loss of %.2f\n", amount);
    } 
    else {
        printf("There is no profit or loss. The selling price is equal to the cost price.\n");
    }

    return 0;
}
19.marks
#include <stdio.h>

int main() {
    int phy,che,maths,bio,eng,computer;
    printf("enter marks");
    scanf("%f%f%f%f%f",&phy,&bio,&che,&maths,&eng);
    float percentage;
    printf("Enter the percentage: ");
    scanf("%f", &percentage);
    if (percentage >= 90) {
        printf("Grade A\n");
    } 
    else if (percentage >= 80) {
        printf("Grade B\n");
    } 
    else if (percentage >= 70) {
        printf("Grade C\n");
    } 
    else if (percentage >= 60) {
        printf("Grade D\n");
    } 
    else if (percentage >= 40) {
        printf("Grade E\n");
    } 
    else {
        printf("Grade F\n");
    }

    return 0;
}
