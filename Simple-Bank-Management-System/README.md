# Simple Bank Management System In C++

This project emphasises on introductory object oriented concepts.

Topics learnt in the process:    
- C++ Constructors and Destructors.    
- Templates.
- Character array vs Strings in C++.
- Overloading (Functions, Operators).    
- C++ compilation process, multi-file projects.
- Windows scripting (file management).    
- Bash: `ls`, `find`


The Bank Management has two types of users:
- Customer
- Employee

An user has the following information:
- UserId [`key`]
- User Name
- Address
- Password

An Account has the following information:
- UserId 
- User Name
- Address
- Account Number [`key`]
- Balance

### Common Operation:

The default options are:

- Login
- Open an account

#### Login
- Input Username, Password
- Error if user does not exist or password is wrong.
- Show other options if successful.

</br>

## CUSTOMER:

The default options are:
- Login
- Open an account

A first time customer can start with opening an account.

A logged in customer gets the following finctionalities:
- Open an account
- Show account details
- Deposit
- Withdraw
- Exit

### Operation Details:

#### Open an account
- Input user name, address (If user is customer and logged in then do not ask for user name, address)
- Input password (If user is logged in do not ask)
- Create unique Account Number
- Create unique User Id
- Input initial amount
- Save Account into database
- Output Account Number, User Id

#### Show Account Details:
Output the following from the database
- UserId 
- Name
- Address
- Account Number 
- Balance

#### Deposit:
- Input amount
- Change the amount in database
- Show account details.

#### Withdraw:
- Input amount
- Change the amount in database
- Show account details.


## EMPLOYEE

If the logged in user is a employee then the user gets the following options.


### Operation Details:

- Open an account
- Show account details
- Search 
- Exit


#### Open an account

Input New User / Existing user.

New User:
- Input user name, address 
- Default safe password is created.
- Create unique Account Number
- Create unique User Id 
- Input initial amount
- Save Account into database
- Output Account Number, User Id, password created


Existing User:
- Input user id
- Read user name from database
- Create unique Account Number
- Input initial amount
- Save Account into database
- Output Account Number, User Id

#### Show Account Details:
Same

### Search
- Search by user id / Name and Address.
- Search by account number

Userid:
- Show User name, address
- Retrieve all accounts for user
- Input which account to show.
- Show Account Details

User Name and Address:
- Show list of found users (Username, user id)
- Input which user to show
- Show User name, address
- Retrieve all accounts for user
- Input which account to show.
- Show Account Details

Account Number:
- Input which account to show.
- Show Account Details
