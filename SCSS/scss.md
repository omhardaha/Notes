`SCSS` means sassy css which allows us to reuse the code.

## Features

### Varriables

- Varriables must be declared before using it.
- It uses `$` sign when declaration and while using it use .
- hyphen and underscore are interchangable(old reason).
- we can declare any valid CSS value format.

```scss
@import url('https://fonts.googleapis.com/css2?family=Lato:ital,wght@0,100;0,300;0,400;0,700;0,900;1,100;1,300;1,400;1,700;1,900&display=swap');

$head-color : rgb(47, 155, 185);
$border: 1px solid green; 
$margins: 1px 2px 4px 1px;
$default-font: "lato", "Helvetica", 'sansserif';

h1{
    font-size: 90px;
    color: $head_color;
    font-family: $default-font;
    border: $border;
    margin: $margins;
}
```
- scope

```scss

body {
	$my-bg-color: rgb(245, 253, 255); // valid till current block
	background-color: $my-bg-color;

	$text-center-global: center !global; // '!global can make varriable to use globally
}
h1 {
	text-align: $text-center-global;
}

```