## Table

`table>tr>th{$}*4^(tr>td{$}*4)*3` will give you -

```html
<table>
	<tr>
		<th>1</th>
		<th>2</th>
		<th>3</th>
		<th>4</th>
	</tr>
	<tr>
		<td>1</td>
		<td>2</td>
		<td>3</td>
		<td>4</td>
	</tr>
	<tr>
		<td>1</td>
		<td>2</td>
		<td>3</td>
		<td>4</td>
	</tr>
	<tr>
		<td>1</td>
		<td>2</td>
		<td>3</td>
		<td>4</td>
	</tr>
</table>
```

### Form

`form>(div>input)*6`

```html
<form action="">
	<div><input type="text" /></div>
	<div><input type="text" /></div>
	<div><input type="text" /></div>
	<div><input type="text" /></div>
	<div><input type="text" /></div>
	<div><input type="text" /></div>
</form>
```

### Form with Attributes

`form>div.input>input[type="email"name="email"]^div.input>input[type="password" name=password]`

```html
<form action="">
	<div class="input">
		<input type="email" name="email" />
	</div>
	<div class="input">
		<input type="password" name="password" />
	</div>
</form>
```

### Form with Classes

`form.text-center.p-6.bg-stone-400.text-black>div.input.my-1>input[type="email" name="email"].p-2^div.input.my-1>input[type="password" name=password].p-2`

```html
<form action="" class="text-center p-6 bg-stone-400 text-black">
	<div class="input my-1">
		<input type="email" name="email" class="p-2" />
	</div>
	<div class="input my-1">
		<input type="password" name="password" class="p-2" />
	</div>
</form>
```

### Buttons

`form.text-center.p-3.bg-gray-200>div>button{OPEN}.p-3.font-bold.text-white.bg-black.hover:bg-white.hover:text-black.border-2.border-black`

```html
<form action="" class="text-center p-3 bg-gray-200">
	<div>
		<button
			class="p-3 font-bold text-white bg-black hover:bg-white hover:text-black border-2 border-black"
		>
			OPEN
		</button>
	</div>
</form>
```
