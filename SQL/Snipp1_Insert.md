### Create Table: student

    CREATE TABLE student (
        p_id INT,
        FirstName VARCHAR(255),
        Address VARCHAR(255),
        City VARCHAR(255)
    );
### Insert Into Table : student (Single Raw)
    insert into student value (1,'om','bamhni','mandla')

### Insert Into Table : student (Multiple Raw)
    insert into student value (2,'om2','bamhni2','mandla2'),(3,'om3','bamhni3','mandla3'),(4,'om4','bamhni4','mandla4')

### Insert Into Table : student (Less Value)
    insert into student(p_id,FirstName,Address) value (2,'om2','mandla2')

### View Table : student
    select * from student

#### o/p student

| p_id | FirstName | Address   | City   |
|------|-----------|-----------|--------|
| 1    | om        | bamhni    | mandla |
| 2    | om2       | bamhni2   | mandla2 |
| 3    | om3       | bamhni3   | mandla3 |
| 4    | om4       | bamhni4   | mandla4 |
| 2    | om2       | mandla2   | NULL   |


    