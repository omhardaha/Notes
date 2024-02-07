### Create Table: student
```sql
CREATE TABLE student (
    p_id INT, FirstName VARCHAR(255), Address VARCHAR(255), City VARCHAR(255)
);
```
    
### INSERT INTO Table : student (Single Raw)
```sql
INSERT INTO student VALUE (1,'om','bamhni','mandla');
```

### INSERT INTO Table : student (Multiple Raw)
```sql
INSERT INTO student VALUE (2,'om2','bamhni2','mandla2'),(3,'om3','bamhni3','mandla3'),(4,'om4','bamhni4','mandla4');
```


### INSERT INTO Table : student (Less VALUE)
```sql
    INSERT INTO student(p_id,FirstName,Address) VALUE (2,'om2','mandla2');
```

### View Table : student
```sql
    select * from student;
```

#### o/p student

| p_id | FirstName | Address   | City   |
|------|-----------|-----------|--------|
| 1    | om        | bamhni    | mandla |
| 2    | om2       | bamhni2   | mandla2 |
| 3    | om3       | bamhni3   | mandla3 |
| 4    | om4       | bamhni4   | mandla4 |
| 2    | om2       | mandla2   | NULL   |


    