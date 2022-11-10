# Simple Bank Management System In C++

This project emphasises on introductory object oriented concepts.

Topics learnt in the process:    
- Inheritence, Constructors and Destructors.    
- Character array vs Strings in C++.
- Namespace.
- Optional.
- Unordered Map.
- Templates
- Overloading (Functions, Operators).    
- Tuple.
- Pass by reference.
- Static, Non-Static member functions.
- C++ compilation process, multi-file projects.
- Windows scripting (file management).    
- Bash: `ls`, `find`.

---

The Bank Management has two types of users:     
- Customer
- Employee

The bank interface starts with 3 options:       
- Exit.
- Login.
- Create new customer account.


![image](https://user-images.githubusercontent.com/17706548/201120693-8a3385b0-48b9-4d71-9c95-8a98dfd64557.png)

### 0. Exit: 
The bank_main is an infinite loop that exits when the user chooses 0.

### 1. Login:
Login as employee or customer.
Login successfull if user_id and password matches.

***The following use cases have been addressed as of now:***
- Trying to login as a customer before any customer accounts are created.     
![image](https://user-images.githubusercontent.com/17706548/201121237-2b6022c5-27c4-4394-b67a-7f480d6c5008.png)

- Trying to login with wrong credentials.     
![image](https://user-images.githubusercontent.com/17706548/201121322-8a49d947-e7e9-4e8e-a016-a54571049b08.png)

- Successful login.     
![image](https://user-images.githubusercontent.com/17706548/201121387-2cc57066-5e03-4e40-8091-f09546c8a8af.png)

### 2. Create new customer account    
- Inputs user details and creates an account.    
- Customer_id is generated incrementally. (5000001 onwards.)    
![image](https://user-images.githubusercontent.com/17706548/201122509-cbe59552-29a5-4a72-8fec-0d4109c80bd1.png)


- This new customer can login from the next loop.     
![image](https://user-images.githubusercontent.com/17706548/201122574-c8d8c1c1-01f8-49cb-ae61-cfde700e423c.png)

### Post Login:
- No post login features have been implemented in this current project.
- This is supposed to be a simple C++ multi-file project.
- I am moving onto more complex projects.
