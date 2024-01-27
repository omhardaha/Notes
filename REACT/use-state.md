- react use virtual dom so we cant change the state directly.
- that why we use `useState()`.

```jsx
import React, { useState } from "react";

const [count, setCount] = useState(0);

const Newcounter = () => {
	const [count, setCount] = useState(0);

	const incrementCount = () => {
		setCount(count + 1);
	};
    
	return (
		<div>
			<button type="button" onClick={incrementCount}>
				You clicked
				{count} times
			</button>
		</div>
	);
};

export default Newcounter;
```
