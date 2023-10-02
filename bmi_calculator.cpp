#include <iostream>
#include <cmath>
#include <string>

int main() {
    // BMI Calculator
    // Metric -> weight / (height * height)
    // Underweight < 18.5
    // Normal Weight 18.5 -> 24.9
    // Overweigth > 25 -> 29.9
    // Obese >= 30

    float weight{0};
    float height{0};
    float bmi{0};
    std::string status;
    std::string measure;

    std::cout << "Would you like to measure your BMI based on metric (kilograms and metres) or imperial units (pounds, inches)? ";
    std::cin >> measure;

    std::cout << "Please enter your weight: ";
    std::cin >> weight;
    std:: cout << "Please enter your height: ";
    std::cin >> height;

    measure == "metric" ? (bmi = weight / std::pow(height, 2)) : (bmi = (weight / std::pow(height, 2)) * 703);

    if (bmi < 18.5) {
        status = "underweight";
    } else if (bmi >= 30) {
        status = "obese";
    } else if (bmi >= 18.5 && bmi < 25) {
        status = "a normal weight";
    } else {
        status = "overweight";
    }

    std::cout << "You are " << status << " with a BMI of " << bmi << std::endl;
}