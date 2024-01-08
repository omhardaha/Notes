
Certainly! Here's the entire content formatted for pasting into one file:

markdown
Copy code
# JOINING TABLES

## 1. Introduction

- All RDBMS are relational in nature, and we refer to other tables to get meaningful outcomes.
- Foreign Keys (FK) are used to reference other tables.

```sql
CREATE TABLE Customer (
    id INT PRIMARY KEY,
    branch_id INT,
    first_name VARCHAR(255),
    last_name VARCHAR(255),
    dob DATE,
    age INT
);
id	branch_id	first_name	last_name	dob	age
2	102	Jane	Smith	1985-08-22	37
3	103	Robert	Johnson	1992-03-10	30
4	101	Emily	Davis	1988-11-28	33
5	104	Michael	Brown	1980-07-05	42
