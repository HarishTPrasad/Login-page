# Login-page

C++ Login Page
This project demonstrates a simple login page implemented using C++ logic. The program showcases the basics of user authentication and provides a foundation for building more advanced security features in C++ applications.

Features
User Registration: New users can create an account by providing a username and password.
User Login: Existing users can log in using their registered credentials.
Authentication: The program performs authentication by checking the provided username and password against the registered user data.


Implementation Details
Data Storage: User data is stored in a simple text file (e.g., users.txt). Each line in the file represents a user record, containing the username and hashed password.

Password Hashing: Passwords are hashed before storage using a secure hashing algorithm (e.g., SHA-256). When users log in, their provided password is hashed and compared against the stored hashed password.

User Interface: The program provides a basic command-line interface for user interaction. It prompts the user for input and displays appropriate messages based on the login or registration outcome.

Error Handling: The program includes error handling to handle scenarios such as incorrect usernames, password mismatches, and file I/O errors.
