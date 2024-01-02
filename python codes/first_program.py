print("hello there.\n") #print statement
name = input("Hi there, what's your name?\n")#taking in input from the user and storing it
print("Hello, " + name + " how have you been?")
answer = input()
#add if else statement here so the program can operate according to the user's mood
if answer == "terrible":
    print("Sorry to hear that.. come back when you're doing better\n")
    exit()
elif answer == "bad":#This operates like an else if statement.
    print("Sorry to hear you're doing "+ answer + "\n")
    print("Come back when you're feeling better\n")
elif answer == "fine":
    print("Hang in there. Things will get better. Would you like to continue?")
    answer_2 = input()
    if answer_2 == "yes":#Nested if else statements
        print("What two numbers would you like for me to perform math with?")
        First_nunber, Second_number = input(), input()
        result = int(First_nunber) + int(Second_number)# converting data type from string to integer.
        print("The sum for the given numbers is: " + str(result) + "\n")#converting back from integer to string.
        result = int(First_nunber) * int(Second_number)
        print("The product for the given numbers is: " + str(result) + "\n")
        result = int(First_nunber) / int(Second_number)
        print("The quotient for the given numbers is: " + str(result) + "\n")
        result = int(First_nunber) - int(Second_number)
        print("The diffrence for the given numbers is: " + str(result) + "\n")
    elif answer_2 == "no":
        exit()
elif answer == "good":
    print("I'm glad to hear you're doing "+ answer)
    print("What two numbers would you like for me to perform math with?")
    First_nunber, Second_number = input(), input()
    # result = int(First_nunber) + int(Second_number)# converting data type from string to integer.
    # print("The sum for the given numbers is: " + str(result) + "\n")#converting back from integer to string.
    # result = int(First_nunber) * int(Second_number)
    # print("The product for the given numbers is: " + str(result) + "\n")
    # result = int(First_nunber) / int(Second_number)
    # print("The quotient for the given numbers is: " + str(result) + "\n")
    # result = int(First_nunber) - int(Second_number)
    # print("The diffrence for the given numbers is: " + str(result) + "\n")

result = int(First_nunber) + int(Second_number)# converting data type from string to integer.
print("The sum for the given numbers is: " + str(result) + "\n")#converting back from integer to string.
result = int(First_nunber) * int(Second_number)
print("The product for the given numbers is: " + str(result) + "\n")
result = int(First_nunber) / int(Second_number)
print("The quotient for the given numbers is: " + str(result) + "\n")
result = int(First_nunber) - int(Second_number)
print("The diffrence for the given numbers is: " + str(result) + "\n")
