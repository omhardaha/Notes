For setup redux toolkit we need to create a `store` and wrap in our root function using provider.

### The `store.js` file will look like -

```jsx
import { configureStore } from "@reduxjs/toolkit";
import favBookSlice from "../features/fav-book/favBookSlice";
// favBookSlice is a reducer Slice means the part of a reducer

export default configureStore({
	reducer: { favBookSlice },
});
```

### The `favBookSlice.js` file will look like -

```jsx
import { createSlice, nanoid } from "@reduxjs/toolkit";

const initialState = {
	books: [
		{ id: 1234, title: "book1", desc: "This is first book" },
		{ id: 1235, title: "book2", desc: "This is secon book" },
		{ id: 1237, title: "book3", desc: "This is third book" },
	],
};

const favBookSlice = createSlice({
	name: "books",
	initialState,
	reducers: {
		addBook(state, action) {
			const newBook = {
				id: nanoid(),
				title: action.payload.title,
				desc: action.payload.desc,
			};
			state.books.push(newBook);
		},
		removeBook(state, action) {
			state.books = state.books.filter((book) => book.id !== action.payload.id);
		},
	},
});

export const { addBook, remove } = favBookSlice.actions;
export default favBookSlice.reducer;
```

### Wrapping `store` into `index.js`

```jsx
<Provider store={store}>
	<App />
</Provider>
```

### Fetching the data from redux Store

```jsx
import { useSelector } from "react-redux";
const data = useSelector((state) => state.favBookSlice.books);
```

### Using the Reducer Function

here we are adding a new book to store

```jsx
import { useDispatch } from "react-redux";
const newBook = {
	id: "1244",
	title: "new book 1",
	desc: "rgrgh",
	link: "http://books.google.com/books/content?id=0r-ztgEACAAJ&printsec=frontcover&img=1&zoom=1&source=gbs_api",
};
dispatch(addBook(newBook));
```
