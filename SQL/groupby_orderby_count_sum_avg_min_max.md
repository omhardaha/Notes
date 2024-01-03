## ORDER BY
1. Sorting the data retrieved using WHERE clause.
2. `ORDER BY <column-name> DESC;`
3. `DESC` = Descending and `ASC` = Ascending (Default).
4. Example: `SELECT * FROM customer ORDER BY name DESC;`

```
CREATE TABLE employee (
    employee_id INT,
    first_name VARCHAR(255),
    last_name VARCHAR(255),
    job_title VARCHAR(255),
    salary INT,
    hire_date DATE,
    department VARCHAR(255)
);
```
```
INSERT INTO employee (employee_id, first_name, last_name, job_title, salary, hire_date, department)
VALUES
(1, 'John', 'Doe', 'Software Engineer', 80000, '2022-01-10', 'IT'),
(2, 'Jane', 'Smith', 'Data Analyst', 60000, '2022-02-15', 'Analytics'),
(3, 'Robert', 'Johnson', 'HR Manager', 75000, '2022-03-20', 'Human Resources'),
(4, 'Emily', 'Davis', 'Marketing Specialist', 70000, '2022-04-25', 'Marketing');
```

```
## Employee Table

| employee_id | first_name | last_name         | job_title             | salary | hire_date   | department        |
|-------------|------------|-------------------|-----------------------|--------|-------------|-------------------|
| 1           | John       | Doe               | Software Engineer     | 80000  | 2022-01-10  | IT                |
| 2           | Jane       | Smith             | Data Analyst          | 60000  | 2022-02-15  | Analytics         |
| 3           | Robert     | Johnson           | HR Manager            | 75000  | 2022-03-20  | Human Resources   |
| 4           | Emily      | Davis             | Marketing Specialist  | 70000  | 2022-04-25  | Marketing         |
| 5           | Michael    | Brown             | Sales Representative  | 85000  | 2022-05-30  | Sales             |
| 6           | Anna       | Johnson           | Software Developer    | 90000  | 2023-01-15  | IT                |
| 7           | Mark       | Anderson          | Data Scientist        | 75000  | 2023-02-20  | Analytics         |
| 8           | Sarah      | Williams          | HR Coordinator        | 65000  | 2023-03-25  | Human Resources   |
| 9           | David      | Martinez          | Marketing Coordinator | 72000  | 2023-04-30  | Marketing         |
| 10          | Olivia     | Taylor            | Sales Manager         | 95000  | 2023-06-05  | Sales             |


```
## DISTINCT

1. Find distinct values in the table.
```
select distinct department from employee;
```

## O/P - Distinct Departments from Employee Table

| department       |
|------------------|
| IT               |
| Analytics        |
| Human Resources  |
| Marketing        |
| Sales            |

## GROUP BY
1. GROUP BY Clause is used to collect data from multiple records and group the result by one or more columns. It is generally used in a SELECT statement.
2. Groups into categories based on the given columns.
3. Example: `SELECT c1, c2, c3 FROM sample_table WHERE cond GROUP BY c1, c2, c3.`
4. All the column names mentioned after the SELECT statement shall be repeated in GROUP BY, in order to successfully execute the query.
5. Used with aggregation functions to perform various actions.

   - `COUNT()`
        ```
        select department , count(*) from employee group by department;
        ```

   - `SUM()`
        ```
        select department , sum(salary) from employee group by department;
        ```
   - `AVG()`
        ```
        select department , avg(salary) from employee group by department;
        ```
   - `MIN()` - `MAX()`
        ```
        select department , avg(salary) from employee group by department;
        ```
   


## GROUP BY HAVING

1. **Out of the categories made by GROUP BY, we would like to know only a particular thing (cond).**
   - Similar to WHERE.
   
3. **Example:**
   ```sql
   SELECT COUNT(cust_id), country FROM customer GROUP BY country HAVING COUNT(cust_id) > 50;
## WHERE vs HAVING

- Both have the same function of filtering rows based on certain conditions.
- `WHERE` clause is used to filter the rows from the table based on specified conditions.
- `HAVING` clause is used to filter the rows from the groups based on the specified condition.
- `HAVING` is used after `GROUP BY` while `WHERE` is used before the `GROUP BY` clause.
- If you are using `HAVING`, `GROUP BY` is necessary.
- `WHERE` can be used with `SELECT`, `UPDATE`, and `DELETE` keywords, while `GROUP BY` is used with `SELECT`.

```

select department , count(*) from employee group by department having count(*) > 2;
```