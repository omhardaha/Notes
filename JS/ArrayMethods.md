## UseFull Array Methods

### 1. Map
``` 
let users = [
  {firstName : "Susan", lastName: "Steward"},
  {firstName : "Daniel", lastName: "Longbottom"},
  {firstName : "Jacob", lastName: "Black"}
];

let userFullnames = users.map(function(element){
    return `${element.firstName} ${element.lastName}`;
})

console.log(userFullnames);
// ["Susan Steward", "Daniel Longbottom", "Jacob Black"]
```

### 2. For Each
``` 
numbers.forEach((number, index, array) => {
    console.log(number);
});
```

### 3. Filter
``` 
const validTables = tables.filter((tab) => isValid(tab));
```
