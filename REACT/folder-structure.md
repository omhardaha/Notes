## Folder Structure in React

We can create file structures as we desire, but for convenience, we should adhere to some commonly used file structures.

Command to create the structure:

```bash
mkdir -p assets context features layouts pages utils components/{form,ui} data hooks lib services

tree

├── src
│   ├── assets
│   │   └── logo.png
│   ├── components
│   │   ├── form
│   │   └── ui
│   │       └── button.js
│   ├── context
│   │   └── AuthContext.js
│   ├── data
│   │   └── constant.js
│   ├── features
│   ├── hooks
│   ├── layouts
│   ├── lib
│   ├── pages
│   │   ├── Home.js
│   │   ├── Login.js
│   │   └── Project.js
│   ├── services
│   └── utils
│       └── dataCalculater.js
```

`assets`: Contains CSS or images.

`components`: Contains reusable components such as buttons and form inputs.

`context`: Contains context files like AuthContext.js.

`data`: Contains constant data.

`features`: Contains feature-specific components.

`hooks`: Contains custom React hooks.

`layouts`: Contains layout components like sidebar and navbar.

`lib`: Contains libraries used throughout the project, e.g., fetch.

`pages`: Contains route pages.

`services`: Contains service-related files.

`utils`: Contains utility functions used across multiple components.
