# write program to print hello world
def print_hello():
    print("Hello, World!")

print(print_hello())

# 2. Write a program to read two numbers and print their sum.
def sum(a,b):
    return a + b

print(sum(9,5))

# 3. Write a program to read two numbers and print their sum, difference, product and quotient.

def calculate(a,b):
    return [a-b,a+b,a*b,a%b]

print(calculate(9,3))

# 4. Write a program to read the radius of a circle and print its area and circumference.

def calculate_area_circumference(r):
    return [r*r, 2*3.14*r]

print(calculate_area_circumference(4))

# 5. Write a program to read the length and breadth of a rectangle and print its area and perimeter.
def calculate_area_perimeter(l,b):
    return [l*b,2*(l+b)]
print(calculate_area_perimeter(5,4))

# 6. Write a program to swap two numbers using a third variable.
def swap(a,b):
    temp = a
    a=b
    b=temp
    return [a,b]
print("swapped", swap(4,5))

# 7. Write a program to swap two numbers without using a third variable.
def swap_without_extra_variable(a,b):
    a=a+b
    b=a-b
    a=a-b
    return [a,b]
print(swap_without_extra_variable(5,4))

# 8. Write a program to read a temperature in Celsius and convert it to Fahrenheit.
def centigrade_to_fahrenheit(centi):
    return str(centi*1.8 + 32) + "F"

print("centigrade to fahrenheit",centigrade_to_fahrenheit(20))

# 9. Write a program to read the marks of 5 subjects and print the total and average.
def total_average_of_5_subjects(a,b,c,d,e):
    return [a+b+c+d+e, (a+b+c+d+e)/5]

print("avg total of 5 subs",total_average_of_5_subjects(40,80,79,50,60))