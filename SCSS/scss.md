`SCSS` means sassy css which allows us to reuse the code.

## Features

### Varriables

- Varriables must be declared before using it.
- It uses `$` sign when declaration and while using it use .
- hyphen and underscore are interchangable(old reason).
- we can declare any valid CSS value format.
- it has scope system like c++ or other languages.

```scss
@import url("https://fonts.googleapis.com/css2?family=Lato:ital,wght@0,100;0,300;0,400;0,700;0,900;1,100;1,300;1,400;1,700;1,900&display=swap");

$head-color: rgb(47, 155, 185);
$border: 1px solid green;
$margins: 1px 2px 4px 1px;
$default-font: "lato", "Helvetica", "sansserif";

h1 {
	font-size: 90px;
	color: $head_color;
	font-family: $default-font;
	border: $border;
	margin: $margins;
}

// Scope
body {
	$my-bg-color: rgb(245, 253, 255); // valid till current block
	background-color: $my-bg-color;
}
```

### Partials

It breaks stylesheets into smaller chunks.

- Partial file name must start with `_`.
- while importing no use of `_` and file extention `.scss`.

```bash
scss
    ├── styles.scss
    └── _variables.scss
```

styles.scss

```scss
@import url("https://fonts.googleapis.com/css2?family=Lato:ital,wght@0,100;0,300;0,400;0,700;0,900;1,100;1,300;1,400;1,700;1,900&display=swap");
@import "variables";

h1 {
	font-size: 90px;
	color: $head_color;
	font-family: $default-font;
	border: $border;
	margin: $margins;
}
// ...
```

\_variables.scss

```scss
$head-color: rgb(47, 155, 185);
$border: 1px solid green;
$margins: 1px 2px 4px 1px;
$default-font: "lato", "Helvetica", "sansserif";
```

### Mixin

Allow you to reuse block of code.

- declare the code with `@mixin`.
- use it with `@include`

SCSS

```scss
@mixin box-text {
	padding: 10px;
	font-size: 30px;
	font-family: lato;
	color: rgb(217, 130, 24);
}
.my-box1 {
	@include box-text;
}
```

Compiled CSS

```css
.my-box1 {
	padding: 10px;
	font-size: 30px;
	font-family: lato;
	color: rgb(217, 130, 24);
}
```

varriables in mixin

```scss
@mixin small-border($color, $radius) {
	border: 1px solid $color;
	border-radius: $radius;
}

.my-box1 {
	@include box-text;
	@include small-border(orange, 3);
}
```

### Inheritance

we can reuse code with `@extend` keyword

```scss
.my-box2 {
	@extend .my-box1;
	color: blueviolet;
}
```
