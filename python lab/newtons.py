def newton(number, number_iters):

    a = float(number) 

    for i in range(number_iters): 

        number = 0.5 * (number + a / number) 

    return number

a=int(input("Enter  number:"))

print("Square root of number:",newton(a,100))
