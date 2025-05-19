import random
import string

def generate_otp(length=6):
    # Define possible characters for the OTP
    characters = string.ascii_letters + string.digits
    # Generate a random OTP
    otp = ''.join(random.choice(characters) for _ in range(length))
    return otp

def main():
    print("Welcome to the OTP Generator!")
    try:
        length = int(input("Enter the OTP length: "))
    except ValueError:
        print("Invalid input. Using default length of 6.")
        length = 6
    otp = generate_otp(length)
    print(f"Your generated OTP is: {otp}")
    print("thank you so much , please come back again!!")

if __name__ == "__main__":
    main()
