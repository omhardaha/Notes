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
    console.log(array);
});
```

### 3. Installation Of OHMYZSH
``` 
sh -c "$(curl -fsSL https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"
```