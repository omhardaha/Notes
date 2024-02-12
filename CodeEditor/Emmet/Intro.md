### What is Emmet

It's a shorthand for HTML, CSS, JSX snippet.

- code faster.
- save time.

Example
` nav>div.logo+div.buttons>(div.button>button{Home})*4|c`
will give you this -

```html
<nav>
	<div class="logo"></div>
	<!-- /.logo -->
	<div class="buttons">
		<div class="button"><button>Home</button></div>
		<!-- /.button -->
		<div class="button"><button>Home</button></div>
		<!-- /.button -->
		<div class="button"><button>Home</button></div>
		<!-- /.button -->
		<div class="button"><button>Home</button></div>
		<!-- /.button -->
	</div>
	<!-- /.buttons -->
</nav>
```

# Features

### Child (Nesting) `>`

- This operator create element nestedly inside any element.
- We can create element inside element with ease.

Example

`div>div>h1` will give you

```html
<div>
	<div>
		<h1></h1>
	</div>
</div>
```

### Sibling `+`

This operator create elements sibling.

Example

`div>div>h1+p+img` will give you

```html
<div>
	<div>
		<h1></h1>
		<p></p>
		<img src="" alt="" />
	</div>
</div>
```

### Loop `*`

Create multiple copy of same item.
`div*10`will give you

```html
<div></div>
<div></div>
<div></div>
<div></div>
<div></div>
<div></div>
<div></div>
<div></div>
<div></div>
<div></div>
```

### Group `()`

Create multiple copy of same item.
`div>(div+h1)*2`will give you

```html
<div>
	<div></div>
	<h1></h1>
	<div></div>
	<h1></h1>
</div>
```

### Heading `#`

`h1#heading` will give you

```html
<h1 id="heading"></h1>
```

### Class `.`

`h1.heading` will give you

```html
<h1 class="heading"></h1>
```

### Custom Attributes `[]`

`button[onclick="handleSubmit"]` will give you

```html
<button onclick="handleSubmit"></button>
```

### Inner Value `{}`

`button{Submit}` will give you

```html
<button>Submit</button>
```

### Comment `|c`

`div.container>div#name|c` will give you

```html
<div class="container">
	<div id="name"></div>
	<!-- /#name -->
</div>
<!-- /.container -->
```
