### Create Table: student
```sql
    CREATE TABLE student (
        p_id INT,
        FirstName VARCHAR(255),
        Address VARCHAR(255),
        City VARCHAR(255)
    );
```



## Employee Table

```sql
CREATE TABLE employee (
    employee_id INT,
    first_name VARCHAR(255),
    last_name VARCHAR(255),
    job_title VARCHAR(255),
    salary INT,
    hire_date DATE,
    department VARCHAR(255)
);

INSERT INTO employee (employee_id, first_name, last_name, job_title, salary, hire_date, department)
VALUES 
(5, 'Michael', 'Brown', 'Sales Representative', 85000, '2022-05-30', 'Sales'),
(6, 'Anna', 'Johnson', 'Software Developer', 90000, '2023-01-15', 'IT'),
(7, 'Mark', 'Anderson', 'Data Scientist', 75000, '2023-02-20', 'Analytics'),
(8, 'Sarah', 'Williams', 'HR Coordinator', 65000, '2023-03-25', 'Human Resources'),
(9, 'David', 'Martinez', 'Marketing Coordinator', 72000, '2023-04-30', 'Marketing'),
(10, 'Olivia', 'Taylor', 'Sales Manager', 95000, '2023-06-05', 'Sales');

INSERT INTO employee (employee_id, first_name, last_name, job_title, salary, hire_date, department)
VALUES
(11, 'John', 'Doe', 'Software Engineer', 80000, '2022-01-10', 'IT');

-- Aggregation Queries
SELECT department, SUM(salary) FROM employee GROUP BY department;

SELECT department, COUNT(*) FROM employee GROUP BY department HAVING COUNT(*) > 2;

SELECT * FROM employee;

-- Delete records with salary greater than 1
DELETE FROM employee WHERE salary > 1;

-- Truncate the Employee Table
TRUNCATE TABLE employee;

CREATE TABLE customer (
    id INT PRIMARY KEY,
    branch_id INT,
    first_name VARCHAR(255),
    last_name VARCHAR(255),
    dob DATE,
    age INT
);

CREATE TABLE ORDERS (
    id INT PRIMARY KEY,
    delivery_date DATE,
    order_placed_date DATE,
    cust_id INT,
    FOREIGN KEY (cust_id) REFERENCES customer(id) ON DELETE CASCADE
);

-- Inserting random values into the customer table
INSERT INTO customer (id, branch_id, first_name, last_name, dob, age) VALUES
(1, 101, 'John', 'Doe', '1990-05-15', 32),
(2, 102, 'Jane', 'Smith', '1985-08-22', 37),
(3, 103, 'Robert', 'Johnson', '1992-03-10', 30),
(4, 101, 'Emily', 'Davis', '1988-11-28', 33),
(5, 104, 'Michael', 'Brown', '1980-07-05', 42);

-- Select all records from customer
SELECT * FROM customer;

-- Inserting random values into the ORDERS table
INSERT INTO ORDERS (id, delivery_date, order_placed_date, cust_id) VALUES
(1, '2023-01-10', '2023-01-05', 1);

-- Select all records from ORDERS
SELECT * FROM ORDERS;

-- Update branch_id in customer table
UPDATE customer SET branch_id = branch_id + 20 WHERE id > 2;

-- Set SQL_SAFE_UPDATES to 0
SET SQL_SAFE_UPDATES = 0;

-- Delete All records from customer table
DELETE FROM customer;

-- Delete records from customer table with id = 1
DELETE FROM customer WHERE id = 1;

CREATE TABLE LOAN (
    email VARCHAR(52) UNIQUE,
    age INT,
    CONSTRAINT age_check CHECK (age > 12),
    interest_rate DOUBLE NOT NULL DEFAULT 4.25
);

USE om;
SELECT * FROM LOAD_HDFC;

-- Alter the LOAD_HDFC table
ALTER TABLE LOAD_HDFC CHANGE COLUMN name p_name VARCHAR(200);
ALTER TABLE LOAD_HDFC DROP COLUMN p_name;

-- Describe the LOAD_HDFC table
DESC LOAD_HDFC;

CREATE DATABASE new;
USE new;

-- Create Table: student
CREATE TABLE student (
    p_id INT,
    FirstName VARCHAR(255),
    Address VARCHAR(255),
    City VARCHAR(255)
);

CREATE TABLE customer (
    id INT PRIMARY KEY,
    branch_id INT,
    first_name VARCHAR(255),
    last_name VARCHAR(255),
    dob DATE,
    age INT
);

CREATE TABLE ORDERS (
    id INT PRIMARY KEY,
    delivery_date DATE,
    order_placed_date DATE,
    cust_id INT,
    FOREIGN KEY (cust_id) REFERENCES customer(id) ON DELETE CASCADE
);
