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

### QWERTY KeyBoard

`.keyboard-box>.number-row>button{$}*10.btn-primary^.qwertyuiop-row>button{Q}*10.btn-primary^.asdfghjkl-row>button{A}*9.btn-primary^.zxcvbnm-row>button{ᛏ}.btn-secondary+button{Z}*7.btn-primary+button{←}.btn-secondary^.space-row>button{?123}.btn-secondary+button{,}.btn-secondary+button{ʘ}.btn-primary+button{Space}.btn-primary.btn-space+button{.}.btn-primary.btn-secondary+button{┘}.btn-enter.btn-primary`

Exaplaination-

- `.keyboard-box` creates a div with class name `keyboard-box`.
- `>` we goes inside `keyboard-box` div.
- `.number-row` creates a div with class name `number-row`.
- `>` we goes inside `number-row` div.
- `button{$}*10.btn-primary` create 10 button with classname `btn-primary` and inside text of button `$` replaced by number starts from 1 we need to change `10` to `0` after emmet.
- `^` we goes one perent up inside `keyboard-box` div.
- `.qwertyuiop-row` creates a div with class name `qwertyuiop-row`.
- `>` we goes inside `qwertyuiop-row` div.
- and `button{Q}*10.btn-primary` create similar 10 button.
- same we did with 1 more row `asdfghjkl-row`.
- In `zxcvbnm-row` row we added 2 special buttons `button{ᛏ}` and `button{←}` with class `btn-secondary`.
- Similarly In `space-row` row we added few more special buttons.

```html
<div class="keyboard-box">
	<div class="number-row">
		<button class="btn-primary">1</button><button class="btn-primary">2</button
		><button class="btn-primary">3</button><button class="btn-primary">4</button
		><button class="btn-primary">5</button><button class="btn-primary">6</button
		><button class="btn-primary">7</button><button class="btn-primary">8</button
		><button class="btn-primary">9</button
		><button class="btn-primary">10</button>
	</div>
	<div class="qwertyuiop-row">
		<button class="btn-primary">Q</button><button class="btn-primary">Q</button
		><button class="btn-primary">Q</button><button class="btn-primary">Q</button
		><button class="btn-primary">Q</button><button class="btn-primary">Q</button
		><button class="btn-primary">Q</button><button class="btn-primary">Q</button
		><button class="btn-primary">Q</button
		><button class="btn-primary">Q</button>
	</div>
	<div class="asdfghjkl-row">
		<button class="btn-primary">A</button><button class="btn-primary">A</button
		><button class="btn-primary">A</button><button class="btn-primary">A</button
		><button class="btn-primary">A</button><button class="btn-primary">A</button
		><button class="btn-primary">A</button><button class="btn-primary">A</button
		><button class="btn-primary">A</button>
	</div>
	<div class="zxcvbnm-row">
		<button class="btn-secondary">ᛏ</button
		><button class="btn-primary">Z</button><button class="btn-primary">Z</button
		><button class="btn-primary">Z</button><button class="btn-primary">Z</button
		><button class="btn-primary">Z</button><button class="btn-primary">Z</button
		><button class="btn-primary">Z</button
		><button class="btn-secondary">←</button>
	</div>
	<div class="space-row">
		<button class="btn-secondary">?123</button
		><button class="btn-secondary">,</button
		><button class="btn-primary">ʘ</button
		><button class="btn-primary btn-space">Space</button
		><button class="btn-primary btn-secondary">.</button
		><button class="btn-enter btn-primary">┘</button>
	</div>
</div>
```

### Blog Page

`.bg-brown-200.text-center.p-20>h1{How To Write Emmet And Improve Code Writing Speed}.font-bold.text-4xl+.date{4 September 2024}.my-4+p{This is a good way of writing the code which is better just a example text.This is a good way of writing the code which is better just a example text .This is a good way of writing the code which is better just a example text .This is a good way of writing the code which is better just a example text .This is a good way of writing the code which is better just a example text This is a good way of writing the code which is better just a example text This is a good way of writing the code which is better just a example text This is a good way of writing the code which is better just a example text .This is a good way of writing the code which is better just a example text .This is a good way of writing the code which is better just a example text This is a good way of writing the code which is better just a example text This is a good way of writing the code which is better just a example text This is a good way of writing the code which is better just a example text This is a good way of writing the code which is better just a example text This is a good way of writing the code which is better just a example text This is a good way of writing the code which is better just a example text This is a good way of writing the code which is better just a example text This is a good way of writing the code which is better just a example text This is a good way of writing the code which is better just a example text }.text-gray-600.leading-9.text-lg`

````html
<div class="bg-brown-200 text-center p-20">
	<h1 class="font-bold text-4xl">
		How To Write Emmet And Improve Code Writing Speed
	</h1>
	<div class="date my-4">4 September 2024</div>
	<p class="text-gray-600 leading-9 text-l">
		This is a good way of writing the code which is better just a example
		text.This is a good way of writing the code which is better just a example
		text .This is a good way of writing the code which is better just a example
		text .This is a good way of writing the code which is better just a example
		text .This is a good way of writing the code which is better just a example
		text This is a good way of writing the code which is better just a example
		text This is a good way of writing the code which is better just a example
		text This is a good way of writing the code which is better just a example
		text .This is a good way of writing the code which is better just a example
		text .This is a good way of writing the code which is better just a example
		text This is a good way of writing the code which is better just a example
		text This is a good way of writing the code which is better just a example
		text This is a good way of writing the code which is better just a example
		text This is a good way of writing the code which is better just a example
		text This is a good way of writing the code which is better just a example
		text This is a good way of writing the code which is better just a example
		text This is a good way of writing the code which is better just a example
		text This is a good way of writing the code which is better just a example
		text This is a good way of writing the code which is better just a example
		text
	</p>
</div>
```
````

### Image Card

`.card.w-40.bg-bg-gray-100.m-4>img[src="https://images.unsplash.com/photo-1707823585193-850a928684e7?q=80&w=1964&auto=format&fit=crop&ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D"].mb-2.cover+h2{A Boy With Head}.text-center`

````html
<div class="card w-40 bg-bg-gray-100 m-4">
        <img src="https://images.unsplash.com/photo-1707823585193-850a928684e7?q=80&w=1964&auto=format&fit=crop&ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D" alt="" class="mb-2 cover">
        <h2 class="text-center">A Boy With Head</h2>
    </div>
```
````
