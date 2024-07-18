#include<stdio.h>
main()

def calculate_circle_properties(radius)
    # Calculate area of the circle
    area = math.pi * radius * radius
    
    # Calculate circumference of the circle
    circumference = 2 * math.pi * radius
    
    return area, circumference

# Example usage:
radius = float(input("Enter the radius of the circle: "));
circle_area, circle_circumference = calculate_circle_properties(radius);

print(f"Area of the circle: {circle_area:.2f} square units");
print(f"Circumference of the circle: {circle_circumference:.2f} units");

