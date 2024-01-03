## Database Operations

```sql
-- Create Database
CREATE DATABASE ORG;
SHOW DATABASES;
USE ORG;
```

## Create Table: Worker 

```sql
CREATE TABLE Worker (
    WORKER_ID INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    FIRST_NAME CHAR(25),
    LAST_NAME CHAR(25),
    SALARY INT(15),
    JOINING_DATE DATETIME,
    DEPARTMENT CHAR(25)
);

-- Insert into Worker Table
INSERT INTO Worker
    (WORKER_ID, FIRST_NAME, LAST_NAME, SALARY, JOINING_DATE, DEPARTMENT) VALUES
        (001, 'Monika', 'Arora', 100000, '2020-02-14 09:00:00', 'HR'),
        (002, 'Niharika', 'Verma', 80000, '2020-06-11 09:00:00', 'Admin'),
        (003, 'Vishal', 'Singhal', 300000, '2020-02-14 09:00:00', 'HR'),
        (004, 'Amitabh', 'Singh', 500000, '2020-02-14 09:00:00', 'Admin'),
        (005, 'Vivek', 'Bhati', 500000, '2020-06-11 09:00:00', 'Admin'),
        (006, 'Vipul', 'Diwan', 200000, '2020-06-11 09:00:00', 'Account'),
        (007, 'Satish', 'Kumar', 75000, '2020-01-20 09:00:00', 'Account'),
        (008, 'Geetika', 'Chauhan', 90000, '2020-04-11 09:00:00', 'Admin');
```

## Create Table: Bonus 

```sql
CREATE TABLE Bonus (
    WORKER_REF_ID INT,
    BONUS_AMOUNT INT(10),
    BONUS_DATE DATETIME,
    FOREIGN KEY (WORKER_REF_ID)
        REFERENCES Worker(WORKER_ID)
        ON DELETE CASCADE
);

INSERT INTO Bonus
    (WORKER_REF_ID, BONUS_AMOUNT, BONUS_DATE) VALUES
        (001, 5000, '2020-02-16'),
        (002, 3000, '2020-06-16'),
        (003, 4000, '2020-02-16'),
        (001, 4500, '2020-02-16'),
        (002, 3500, '2020-06-16');
``` 
## Create Table: Title
```sql
CREATE TABLE Title (
    WORKER_REF_ID INT,
    WORKER_TITLE CHAR(25),
    AFFECTED_FROM DATETIME,
    FOREIGN KEY (WORKER_REF_ID)
        REFERENCES Worker(WORKER_ID)
        ON DELETE CASCADE
);

-- Insert into Title Table
INSERT INTO Title
    (WORKER_REF_ID, WORKER_TITLE, AFFECTED_FROM) VALUES
    (001, 'Manager', '2016-02-20 00:00:00'),
    (002, 'Executive', '2016-06-11 00:00:00'),
    (008, 'Executive', '2016-06-11 00:00:00'),
    (005, 'Manager', '2016-06-11 00:00:00'),
    (004, 'Asst. Manager', '2016-06-11 00:00:00'),
    (007, 'Executive', '2016-06-11 00:00:00'),
    (006, 'Lead', '2016-06-11 00:00:00'),
    (003, 'Lead', '2016-06-11 00:00:00');
```
#### Q1 Write an SQL query to fetch “FIRST_NAME” from Worker table using the alias name as <WORKER_NAME> in upper case.
```sql
select upper(FIRST_NAME) as WORKER_NAME from worker;
```
#### Q2 Write an SQL query to print the first three characters of FIRST_NAME from Worker table.
```sql
select SUBSTRING(FIRST_NAME, 1, 3) DEPARTMENT from worker;
```
#### Q3 Write an SQL query to print all Worker details from the Worker table order by FIRST_NAME Ascending and DEPARTMENT Descending.
```sql
select * from worker order by first_name, department DESC;
```
#### Q4 WrWrite an SQL query to print details of the Workers whose FIRST_NAME contains ‘a’.
```sql
select * from worker where first_name LIKE '%a%';
```
#### Q5 Write an SQL query to print details of the Workers whose FIRST_NAME ends with ‘h’ and contains six alphabets.
```sql
select * from worker where first_name LIKE '_____h';
```
#### Q6 Write an SQL query to print details of the Workers who have joined in Feb’2014.
```sql
select * from worker where YEAR(joining_date) = 2014 AND MONTH(joining_date) = 02;
```
```sql
select * from  worker where SUBSTRING(JOINING_DATE,1,7)='2014-02';
```
#### Q6 Write an SQL query to fetch the no. of workers for each department in the descending order.
```sql
select department, count(worker_id) AS no_of_worker from worker group by department
ORDER BY no_of_worker desc;
``` 

- RTRIM() - Remove trailing spaces from a string.
- LTRIM() - Remove starting spaces from a string.
- INSTR() - returns the position of the first occurrence of a string in another string.
- LENGTH() - returns the length of a string (in bytes).
- REPLACE() - replaces all occurrences of a substring within a string, with a new substring.
- CONCAT() - adds two or more expressions together.
    ```sql
    select CONCAT(first_name, ' ', last_name) AS COMPLETE_NAME from worker;
    ```