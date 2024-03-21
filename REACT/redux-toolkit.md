## Redux

Redux is a state management library that allow you to have a global state. State which can be accessible in any component in tree.

### Setup

We need to install two packages which will help configuring redux toolkit.

```bash
npm install @reduxjs/toolkit
```

```bash
npm install react-redux
```

`Redux` has 3 core component -

1. `actions`
2. `store`
3. `reducers`

### Actions

Action can be used for sending data to Redux Store.

Example -

```js
{
  type: "INCREMENT",
  payload: {
    incrementBy: 5,
  }
}
```

`Type` indicates the type of action.

`payload` its a object which can be usefull for change the state.

### Reducers

Reducers take the previous state of the app and return a new state based on the action passed to it.

```js
const CounterReducer = (state, action) => {
	switch (action.type) {
		case "INCREMENT":
			return state + action.payload.incrementBy;
		default:
			return state;
	}
};
```
