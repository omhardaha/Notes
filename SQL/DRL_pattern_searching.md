## Pattern Searching / Wildcard (`%`, `_`)
    %  - Represents zero or more characters       
        SELECT * FROM Customers WHERE Name LIKE 'a%';

    _  - Represents a single character    
         SELECT * FROM Customers WHERE City LIKE '_ondon';     

    [] - Represents any single character within the brackets 
         SELECT * FROM Customers WHERE CustomerName LIKE '[bsp]%';

    ! or ^  - Represents any character not in the brackets     
    -  - Represents any single character within the specified range


### Starts with 'a'
```sql
SELECT * FROM Customers WHERE Name LIKE 'a%';
```

### Ends with 'a'
```sql
SELECT * FROM Customers WHERE Name LIKE '%a';
```
### Contains 'aa' anywhere in String
```sql
SELECT * FROM Customers WHERE Name LIKE '%aa%';
```

### Return all customers starting with either "b", "s", or "p":
```sql
SELECT * FROM Customers WHERE CustomerName LIKE '[bsp]%';
```
### Return all customers not starting with either "b", "s", or "p":
```sql
SELECT * FROM Customers WHERE CustomerName LIKE '[!bsp]%';
```
### Return all customers starting with either "a", "b", "c", "d":
```sql
SELECT * FROM Customers WHERE CustomerName LIKE '[a-d]%';
```