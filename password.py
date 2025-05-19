import random
import string

def generate_password(length=12):
    # Define possible characters for the password
    characters = string.ascii_letters + string.digits + string.punctuation
    # Generate a random password
    password = ''.join(random.choice(characters) for _ in range(length))
    return password

def main():
    print("Welcome to the Password Generator!")
    try:
        length = int(input("Enter the desired password length: "))
    except ValueError:
        print("Invalid input. Using default length of 12.")
        length = 12

    password = generate_password(length)
    print(f"Your generated password is: {password}")

if __name__ == "__main__":
    main()
