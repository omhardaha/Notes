- it run at least once when we refresh our code.

### Dependencies Array
 - whenever anything inside this array is change.
 - The useEffect Function Destroy itself run a cleanup function.
 - Then re run the useEffect inside code.

```js
import React, { useEffect, useState } from 'react'

const Temp = () => {
    const [counter, setCounter] = useState(1);

    useEffect(() => {
      console.log("Data counter",counter);
    
      return () => {
        console.log("cleared data",counter);
      }
    }, [counter])
    

    return (
        <div className='text-xl my-8 mt-20'>
            Temp = {counter}
            <button className='border-1' onClick={() => setCounter(counter + 1)}>Increase</button>
        </div>
    )
}

export default Temp;
```

```js
import React, { useEffect } from 'react'

const useEffect = () => {
    useEffect(() => {
        // Code 

        // Optional Function (Clean Up Function)
        
    }, [])// Dependencies Array

    return (
        <div>useEffect</div>
    )
}

export default useEffect
```