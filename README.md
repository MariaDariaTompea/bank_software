# Banking System

This is a simple banking system console application written in C. The program allows users to perform various banking operations such as deposit, withdrawal, transfer, and view transaction history.

## Features

- User authentication (login and signup)
- Account transactions (deposit, withdrawal, transfer)
- Transaction history and reporting
- Exporting transactions to Excel

## Getting Started

### Prerequisites

Make sure you have a C compiler installed on your system.

### File Structure

- `main.c`: Main program file containing the implementation of the banking system.
- `utils.h` and `utils.c`: Utility functions used in the program.
- `calendar.h` and `calendar.c`: Date and time-related functions.
- `libxl.h`: Library for exporting transactions to Excel.

## Function Specifications

### Authentication Functions

#### `int Login()`

- Parameters: None
- Returns: User ID if login is successful, 0 otherwise
- Functionality: Authenticates the user by checking the entered username and password against the existing accounts.

#### `void Sign_up()`

- Parameters: None
- Returns: None
- Functionality: Allows a new user to create an account by entering their name, username, and password.

#### `void Logout()`

- Parameters: None
- Returns: None
- Functionality: Logs the user out and records the logout event in the transaction history.

### Transaction Functions

#### `void Deposit(int id)`

- Parameters: `id` (int) - User ID
- Returns: None
- Functionality: Allows the user to deposit money into their account and records the transaction.

#### `void Withdrawals(int id)`

- Parameters: `id` (int) - User ID
- Returns: None
- Functionality: Allows the user to withdraw money from their account and records the transaction.

#### `void Transfer(int id)`

- Parameters: `id` (int) - User ID
- Returns: None
- Functionality: Allows the user to transfer money to another user's account and records the transaction.

#### `void All_Transaction(int id)`

- Parameters: `id` (int) - User ID
- Returns: None
- Functionality: Displays all transactions related to the user.

#### `void Export_All_Transaction(int id)`

- Parameters: `id` (int) - User ID
- Returns: None
- Functionality: Exports all transactions related to the user to an Excel file.

#### `void Account_Statement(int id)`

- Parameters: `id` (int) - User ID
- Returns: None
- Functionality: Displays a detailed account statement for a specified date range.

#### `void Customer(int id)`

- Parameters: `id` (int) - User ID
- Returns: None
- Functionality: Displays a list of customers with whom the user has conducted transactions.

#### `void History(int id)`

- Parameters: `id` (int) - User ID
- Returns: None
- Functionality: Displays the transaction history for the logged-in user.

### Helper Functions

#### `int eAnBisect(int numar)`

- Parameters: `numar` (int) - Year
- Returns: 1 if the year is a leap year, 0 otherwise
- Functionality: Checks if a given year is a leap year.

#### `int Format_Valid_Data(struct date d)`

- Parameters: `d` (struct date) - Date structure
- Returns: 1 if the date is valid, 0 otherwise
- Functionality: Checks if a date is valid.

#### `int Compara_Data(struct date a, struct date b)`

- Parameters: `a` (struct date), `b` (struct date) - Date structures to compare
- Returns: -1 if `a < b`, 0 if `a == b`, 1 if `a > b`
- Functionality: Compares two date structures.

#### `void Set_Data()`

- Parameters: None
- Returns: None
- Functionality: Sets the current date in the global variable `DC`.

#### `void Time(char * rez)`

- Parameters: `rez` (char *) - Result string
- Returns: None
- Functionality: Gets the current time and formats it as a string.

#### `void data_to_str(struct date d, char* s)`

- Parameters: `d` (struct date), `s` (char *) - Date structure and result string
- Returns: None
- Functionality: Converts a date structure to a string.

#### `int isalpha_or_space(char * s)`

- Parameters: `s` (char *) - String to check
- Returns: 1 if the string contains only alphabetic characters or spaces, 0 otherwise
- Functionality: Checks if a string contains only alphabetic characters or spaces.

#### `int isalpha_or_number(char * s)`

- Parameters: `s` (char *) - String to check
- Returns: 1 if the string contains only alphabetic characters or numbers, 0 otherwise
- Functionality: Checks if a string contains only alphabetic characters or numbers.

#### `void Elimina_bn(char * s)`

- Parameters: `s` (char *) - String to modify
- Returns: None
- Functionality: Removes the newline character from the end of a string.

#### `void Elimina_spatiu_inceput(char * s)`


- Parameters: `s` (char *) - String to modify
- Returns: None
- Functionality: Removes the space character from the beginning of a string.
